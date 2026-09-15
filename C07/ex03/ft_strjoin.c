/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 11:36:04 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/01 17:53:02 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_strsize_double(int size, char **str)
{
	int	i;
	int	j;
	int	sum;

	i = 0;
	j = 0;
	sum = 0;
	while (i < size)
	{
		while (str[i][j] != '\0')
		{
			j++;
			sum++;
		}
		j = 0;
		i++;
	}
	return (sum);
}

char	*join(int size, char **strs, char *sep, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
		{
			str[k] = strs[i][j];
			j++;
			k++;
		}
		j = 0;
		while (j < ft_strlen(sep) && i < size - 1)
		{
			str[k++] = sep[j++];
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		str_size;

	if (size == 0)
	{
		str = malloc(1);
		str[0] = '\0';
		return (str);
	}
	str_size = ft_strsize_double (size, strs)
		+ ft_strlen (sep) * (size - 1) + 1;
	str = (char *)malloc(sizeof(char) * str_size);
	if (!str)
	{
		return (NULL);
	}
	return (join(size, strs, sep, str));
}
// #include <stdio.h>
// int main(void)
// {
//     int size;
//     char    *strs[] = {"Hello", "World", "!!!!!"};
//     char    *sep;
//     char    *str;

//     size = 3;
//     sep = "/.../";
//     str = ft_strjoin(size, strs, sep);
//     printf("%s", str);
//     return (0);
// }
