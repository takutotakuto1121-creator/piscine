/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:30:14 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 17:40:23 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
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

// 	n = ft_strncmp (s1, s2, 4);
// 	printf("%d", n);
// 	return (0);
// }
