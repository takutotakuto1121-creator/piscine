/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:23:34 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/07 04:58:46 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && to_find[j] != '\0')
				j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char	*n;
// 	char	*str = "Hello World!";
// 	char	*to_find = "Hello";
// 	printf("%s\n", str);
// 	n = ft_strstr (str, to_find);
// 	printf("%s\n", str);
// 	printf("%p\n", n);
// }
