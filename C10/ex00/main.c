/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 04:09:09 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/04 05:46:43 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	is_exception(int argc)
{
	if (argc == 1)
	{
		write (2, "File name missing.", 18);
		return (1);
	}
	if (argc > 3)
	{
		write (2, "Too many arguments.", 19);
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[1024];

	if (is_exception (argc))
		return (0);
	fd = open (argv[1], O_RDONLY);
	if (fd == -1)
	{
		write (1, "Cannot read file.", 17);
		return (0);
	}
	ret = read (fd, buf, 1024);
	while (ret > 0)
	{
		write (1, buf, ret);
		ret = read (fd, buf, 1024);
	}
	if (ret == -1)
		write (1, "Cannot read file.", 17);
	close (fd);
	return (0);
}
