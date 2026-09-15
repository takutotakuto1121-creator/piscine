/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 04:17:51 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/02 19:24:40 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	m;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	m = nb * ft_recursive_power (nb, power - 1);
	if (m < 0 && power % 2 == 0 && nb < 0)
		return (0);
	return (m);
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

//     printf("%d\n", ft_recursive_power(list[0].nb, list[0].power));
// 	printf("%d\n", ft_recursive_power(list[1].nb, list[1].power));
// 	printf("%d\n", ft_recursive_power(list[2].nb, list[2].power));
// 	printf("%d\n", ft_recursive_power(list[3].nb, list[3].power));
// 	printf("%d\n", ft_recursive_power(list[4].nb, list[4].power));

// 	return (0);
// }
