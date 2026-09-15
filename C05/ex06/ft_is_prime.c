/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:56:54 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/02 19:24:30 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;

	if (nb <= 1)
	{
		return (0);
	}
	m = 2;
	while (m <= nb / m)
	{
		if (nb % m == 0)
		{
			return (0);
		}
		m++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;

// 	nb = -1;
// 	printf("%d", ft_is_prime(nb));
// }
