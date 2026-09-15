/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 21:47:35 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 10:43:21 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
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
	m = nb * ft_recursive_factorial (nb - 1);
	return (m);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;

// 	nb = 6;
// 	printf("%d", ft_iterative_factorial(nb));
// }
