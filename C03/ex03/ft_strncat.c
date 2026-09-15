/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:22:38 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 03:12:30 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
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
// 	ft_strncat (dest, src, 2);
// 	printf("%s", dest);
// 	return (0);
// }
