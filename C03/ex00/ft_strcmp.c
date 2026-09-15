/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 08:58:53 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 17:36:51 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int		n;
// 	char	s1[] = "Hello";
// 	char	s2[] = "Helmo";

// 	n = ft_strcmp (s1, s2);
// 	printf("%d", n);
// 	return (0);
// }
