/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 05:41:29 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/27 22:35:53 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*div;
// 	int	*mod;
// 	int c;
// 	int d;

// 	a = 5;
// 	b = 2;
// 	div = &c;
// 	mod = &d;
// 	printf("%d, %d\n", a, b);
// 	ft_div_mod(a, b, div, mod);
// 	printf("divは%dで、modは%dです。\n", *div, *mod);
// }
