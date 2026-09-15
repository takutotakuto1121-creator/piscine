/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 21:59:27 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 03:16:25 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = ft_strlen (dest);
	src_len = ft_strlen (src);
	if (size == 0)
		return (src_len);
	if (dest_len < size)
	{
		while (dest_len < size - 1 && src[i] != '\0')
		{
			dest[dest_len] = src[i];
			i++;
			dest_len++;
		}
		dest[dest_len] = '\0';
		return (dest_len + src_len - i);
	}
	else
		return (src_len + size);
}
// #include <stdio.h>
// int	main(void)
// {
// 	unsigned int	i;
// 	char	dest[20] = "0123456789";
// 	char	*src = "01234567890123456789";
// 	printf("%s\n", dest);
// 	i = ft_strlcat(dest, src, 20);
// 	printf("%s\n", dest);
// 	printf("%d", i);
// }
