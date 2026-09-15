/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 20:21:57 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/02 19:22:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	str = (int *)malloc(sizeof(int) * (max - min));
	if (!(str))
	{
		return (NULL);
	}
	while (i < max - min)
	{
		str[i] = i + min;
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	*str;
// 	int	min;
// 	int	max;
// 	int	i;

// 	min = 3;
// 	max = 9;
// 	i = 0;
// 	str = ft_range (min, max);
// 	while (i < max - min)
// 	{
// 	printf("%d", str[i]);
// 	i++;
// 	}
// 	return (0);
// }
