/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 04:58:52 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/27 22:36:01 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = size - 1;
	while (i < size)
	{
		while (j > i)
		{
			if (tab[j - 1] > tab[j])
			{
				tmp = tab[j - 1];
				tab[j - 1] = tab[j];
				tab[j] = tmp;
			}
			j --;
		}
		j = size - 1;
		i ++;
	}
}
// #include <stdio.h>
// int	main(void)
// {
// 	int arr[] = {1, 5, 2, 5, 6, 2, 5};
// 	int i = 0;
// 	while (i <= 6)
// 	{
// 	printf("%d", arr[i]);
// 	i++;
// 	}
// 	ft_sort_int_tab (arr, 7);
// 	printf("\n");
// 	int j = 0;
// 	while (j <= 6)
// 	{
// 	printf("%d", arr[j]);
// 	j++;
// 	}
// 	return (0);
// }
