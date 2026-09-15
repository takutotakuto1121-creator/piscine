/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 03:48:35 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/27 22:35:52 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp_a;
	int	tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	*a = tmp_b;
	*b = tmp_a;
}
// #include <stdio.h>

// int	main(void)
// {
// 	int	n;
// 	int	m;
// 	int	*a;
// 	int	*b;

// 	n = 1;
// 	m = 2;
// 	a = &n;
// 	b = &m;
// 	printf("%d, %d\n", n, m);
// 	ft_swap (a, b);
// 	printf("%d, %d", n, m);
// }
