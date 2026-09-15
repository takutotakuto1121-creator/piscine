/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 21:55:34 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 04:18:08 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	m;

	m = 0;
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1 || index == 2)
	{
		return (1);
	}
	if (index > 2)
	{
		m = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (m);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	index;

// 	index = 10;
// 	printf("%d", ft_fibonacci(index));
// 	return (0);
// }
