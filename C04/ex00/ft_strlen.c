/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 22:25:30 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 19:56:53 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	char *str = "Hello World!";
// 	i = ft_strlen(str);
// 	printf("%d", i);
// 	return (0);
// }
