/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 06:51:38 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/02 19:11:46 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (max - min));
	if (!*range)
		return (-1);
	while (i < max - min)
	{
		(*range)[i] = i + min;
		i++;
	}
	return (max - min);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	*range;
// 	int	min;
// 	int	max;
// 	int	n;
// 	int	i;

// 	min = 3;
// 	max = 9;
// 	n = ft_ultimate_range (&range, min, max);
// 	i = 0;
// 	printf("%d\n", n);
// 	while (i < n)
// 	{
// 		printf("%d", range[i]);
// 		i++;
// 	}
// }
