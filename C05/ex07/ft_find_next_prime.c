/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 16:01:12 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 04:21:37 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;

	m = 2;
	while (m < nb)
	{
		if (nb % m == 0)
		{
			return (0);
		}
		m++;
	}
	return (1);
}

int	next_prime(int nb)
{
	int	m;

	m = 1;
	while (ft_is_prime(nb + m) == 0)
	{
		m++;
	}
	return (nb + m);
}

int	ft_find_next_prime(int nb)
{
	int	m;

	m = 2;
	while (m < nb)
	{
		if (nb % m == 0)
		{
			return (next_prime (nb));
		}
		m++;
	}
	return (nb);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;

// 	nb = 7;
// 	printf("%d", ft_find_next_prime(nb));
// }
