/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 01:57:10 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/25 19:42:47 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i ++;
	}
	if (src[i] == '\0')
	{
		dest[i] = src[i];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[20] = "Hello";
// 	char	*src;

// 	src = "World";
// 	ft_strcpy (dest, src);
// 	printf("%s", dest);
// }
