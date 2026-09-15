/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 06:08:05 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/27 22:35:56 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		write (1, str + i, 1);
		i ++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*str = "hellohello";
// 	ft_putstr(str);
// 	return (0);
// }
