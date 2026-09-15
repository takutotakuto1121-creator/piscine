/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 06:09:15 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 16:17:10 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (!(str[i] == '\0'))
	{
		i ++;
	}
	return (i);
}
// #include <stdio.h>
// int	main(void)
// {
// 	int	i;
// 	char	*str = "hellohello";
// 	i	=	ft_strlen(str);
// 	printf("%d", i);
// 	return	(0);
// }
