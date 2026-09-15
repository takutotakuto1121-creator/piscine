/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 06:47:34 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 17:12:34 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if ('a' <= str[0] && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		if (((0 <= str[i - 1] && str[i - 1] <= 47)
				|| (58 <= str[i - 1] && str[i - 1] <= 64)
				|| (91 <= str[i - 1] && str[i - 1] <= 96)
				|| (123 <= str[i - 1] && str[i - 1] <= 126))
			&& ('a' <= str[i] && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "hi, how are you? 42woRds fOrty-two; fifty+and+one";
// 	printf("%s\n", str);
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// }
