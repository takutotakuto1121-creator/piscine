/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 06:27:59 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 16:15:53 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab [size - 1 - i];
		tab[size - 1 - i] = tmp;
		i ++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	str[6];
// 	int	i = 0;
// 	int	j = 0;

// 	str[0] = 1;
// 	str[1] = 2;
// 	str[2] = 3;
// 	str[3] = 4;
// 	str[4] = 5;
// 	str[5] = 6;
// 	while (i < 6)
// 	{
// 	printf ("%d", str[i]);
// 	i ++;
// 	}
// 	ft_rev_int_tab(str, 6);
// 	printf("\n");
// 	while (j < 6)
// 	{
// 	printf("%d", str[j]);
// 	j ++;
// 	}
// }
