/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 20:01:45 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/31 03:51:46 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip(char *str)
{
	int	i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r')
	{
		i++;
	}
	return (i);
}

int	hantei(int j)
{
	if (j % 2 == 1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	sign;
	int	result;

	j = 0;
	result = 0;
	i = skip (str);
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			j++;
		}
		i++;
	}
	sign = hantei (j);
	while ('0' <= str[i] && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sign);
}
// #include <stdio.h>
// int main(void)
// {
//     char *str = " \n ++++-------25732789HEllo!!";
//     printf("%d", ft_atoi(str));
// 	return (0);
// }
