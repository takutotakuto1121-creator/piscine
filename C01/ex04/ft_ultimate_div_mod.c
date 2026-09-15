/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 05:43:51 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/27 22:35:55 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	*a;
// 	int	*b;
// 	int	c;
// 	int	d;

// 	a = &c;
// 	b = &d;
// 	c = 1;
// 	d = 2;
// 	printf("%d, %d\n", c, d);
// 	ft_ultimate_div_mod(a, b);
// 	printf("%d, %d", c, d);
// }
