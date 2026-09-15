/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:51:32 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 08:00:00 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	m;

	m = 1;
	while (m <= nb / m)
	{
		if (m * m == nb)
		{
			return (m);
		}
		m++;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	nb;

// 	nb = 81;
// 	printf("%d", ft_sqrt(nb));
// }
