/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:36:07 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 17:43:17 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	src[20] = "World";
// 	printf("%s\n", dest);
// 	ft_strcat (dest, src);
// 	printf("%s", dest);
// 	return (0);
// }
