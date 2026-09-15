/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 05:42:08 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/04 16:02:50 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>
#include <unistd.h>

#define BUF_SIZE 30000

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	print_error(char *argv, char *file)
{
	char	*command;
	char	*err_msg;

	command = basename (file);
	err_msg = strerror (errno);
	write (2, command, ft_strlen (command));
	write (2, ": ", 2);
	write (2, argv, ft_strlen (argv));
	write (2, ": ", 2);
	write (2, err_msg, ft_strlen (err_msg));
	write (2, "\n", 1);
	return (0);
}

int	ft_display(int fd, char *argv, char *file)
{
	int		ret;
	char	buf[BUF_SIZE];

	ret = read (fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write (1, buf, ret);
		ret = read (fd, buf, BUF_SIZE);
	}
	if (ret == -1)
		print_error (argv, file);
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	i = 1;
	if (argc == 1)
	{
		ft_display (0, argv[0], "stdin");
		return (0);
	}
	if (argc > 1)
	{
		while (i < argc)
		{
			fd = open (argv[i], O_RDONLY);
			if (fd == -1)
				print_error(argv[i], argv[0]);
			else
			{
				ft_display (fd, argv[0], argv[i]);
				close (fd);
			}
			i++;
		}
	}
	return (0);
}
