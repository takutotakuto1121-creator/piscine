/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 04:17:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/03 06:02:36 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nb1;

	i = 0;
	nb1 = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (--power)
		nb = nb * nb1;
	return (nb);
}
// #include <stdio.h>
// int main(void)
// {
//     struct number {
// 		int nb;
// 		int power;
// 	} list[10];

// 	list[0].nb = 3;
// 	list[0].power = 4;
// 	list[1].nb = -3;
// 	list[1].power = 4;
// 	list[2].nb = 3;
// 	list[2].power = -4;
// 	list[3].nb = -3;
// 	list[3].power = 3;
// 	list[4].nb = -3;
// 	list[4].power = -4;

//     printf("%d\n", ft_iterative_power(list[0].nb, list[0].power));
// 	printf("%d\n", ft_iterative_power(list[1].nb, list[1].power));
// 	printf("%d\n", ft_iterative_power(list[2].nb, list[2].power));
// 	printf("%d\n", ft_iterative_power(list[3].nb, list[3].power));
// 	printf("%d\n", ft_iterative_power(list[4].nb, list[4].power));

// 	return (0);
// }
