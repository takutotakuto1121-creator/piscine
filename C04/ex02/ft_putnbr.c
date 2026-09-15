/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 22:33:45 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/07 10:16:20 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putint(int nb)
{
	char	c;

	c = nb + '0';
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = -nb;
		write (1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putint (nb % 10);
}
// int main(void)
// {
//     int nb;
//     int nb2;
// 	int	nb3;

//     nb = 32095;
//     nb2 = -29837;
// 	nb3 = -2147483648;
//     ft_putnbr(nb);
//     write (1, "\n", 1);
//     ft_putnbr(nb2);
// 	write (1, "\n", 1);
// 	ft_putnbr (nb3);
// 	return (0);
// }
