/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 21:42:21 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 04:09:37 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	m;

	m = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
		return (1);
	}
	while (nb >= 1)
	{
		m = m * nb;
		nb = nb - 1;
	}
	return (m);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;

// 	nb = 6;
// 	printf("%d", ft_iterative_factorial(nb));
// }
