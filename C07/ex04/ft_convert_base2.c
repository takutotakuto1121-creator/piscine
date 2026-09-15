/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 07:10:20 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/09 21:39:46 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	determine_exception(char *base);
int	is_base(char c, char *base);
int	is_base_digit(char c, char *base);
int	ft_atoi_base(char *str, char *base);

int	n_digit(long nbr, char *base_to)
{
	int	n;
	int	digit;

	n = ft_strlen (base_to);
	digit = 1;
	while (nbr >= n)
	{
		nbr /= n;
		digit++;
	}
	return (digit);
}

char	*ft_swap(char *str)
{
	int		i;
	int		size;
	char	tmp;

	i = 0;
	size = ft_strlen (str);
	while (i < size / 2)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

char	*ft_itoa_base_plus(long nbr, char *base_to)
{
	char	*nbr_to;
	int		n;
	int		size;
	int		i;

	n = ft_strlen (base_to);
	size = n_digit (nbr, base_to);
	nbr_to = (char *)malloc(sizeof(char) * (size + 1));
	if (!nbr_to)
		return (NULL);
	i = 0;
	while (i < size)
	{
		nbr_to[i] = base_to[nbr % n];
		nbr /= n;
		i++;
	}
	nbr_to[i] = '\0';
	return (ft_swap (nbr_to));
}

char	*ft_itoa_base_minus(long nbr, char *base_to)
{
	char	*nbr_to;
	int		n;
	int		size;
	int		i;

	n = ft_strlen (base_to);
	size = n_digit (nbr, base_to);
	nbr_to = (char *)malloc(sizeof(char) * (size + 2));
	if (!nbr_to)
		return (NULL);
	i = 1;
	nbr_to[0] = '-';
	while (i < size + 1)
	{
		nbr_to[i] = base_to[nbr % n];
		nbr /= n;
		i++;
	}
	nbr_to[i] = '\0';
	ft_swap (&nbr_to[1]);
	return (nbr_to);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	n;
	char	*nbr_to;
	int		sign;

	n = ft_atoi_base (nbr, base_from);
	sign = 1;
	if (determine_exception (base_from) || determine_exception (base_to))
		return (NULL);
	if (n < 0)
		sign = -1;
	if (sign == 1)
		nbr_to = ft_itoa_base_plus (n, base_to);
	if (sign == -1)
	{
		n = -n;
		nbr_to = ft_itoa_base_minus (n, base_to);
	}
	return (nbr_to);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *nbr = "28fa3";
// 	char *base_from = "0123456789abcdef";
// 	char *base_to = "0123456789";
// 	char *nbr_to = ft_convert_base (nbr, base_from, base_to);
// 	printf("%s", nbr_to);
// 	free (nbr_to);
// 	return (0);
// }
