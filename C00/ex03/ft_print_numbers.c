/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 02:50:21 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/21 11:53:48 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		number;
	char	number2;

	number = 0;
	number2 = '0' + number;
	while (number <= 9)
	{
		write(1, &number2, 1);
		number ++;
		number2 = '0' + number;
	}
}
// int		main(void)
// {
// 	ft_print_numbers();
// 	return	(0);
// }
