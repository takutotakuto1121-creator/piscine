/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:35:56 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/01 21:20:30 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!str)
	{
		return (NULL);
	}
	while (src[i] != '\0')
	{
		str[i] = src[i];
		i++;
	}
	str[i] = src[i];
	return (str);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*list;

	list = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!list)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		list[i].size = ft_strlen (av[i]);
		list[i].str = av[i];
		list[i].copy = ft_strdup (av[i]);
		if (!list[i].copy)
			return (NULL);
		i++;
	}
	list[i].str = 0;
	return (list);
}
