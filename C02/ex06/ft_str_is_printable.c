/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 06:25:58 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 16:58:29 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((0 <= str[i] && str[i] <= 31) || (str[i] == 127))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int 					result;
// 	char	str[] = "Hello";
// 	result = ft_str_is_printable (str);
// 	printf("%d", result);
// 	return (0);
// }
