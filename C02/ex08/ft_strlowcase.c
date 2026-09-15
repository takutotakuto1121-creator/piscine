/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 06:46:13 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 16:58:20 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "aslkdhfKJHAKJHDSHAFLhdksjhf";
// 	printf("%s\n", str);
// 	ft_strlowcase(str);
// 	printf("%s", str);
// 	return (0);
// }
