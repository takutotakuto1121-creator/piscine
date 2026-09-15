/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:11:50 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 23:27:20 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar (str[i]);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc != 1)
	{
		return (0);
	}
	ft_putstr (argv[0]);
	ft_putchar ('\n');
	return (0);
}
