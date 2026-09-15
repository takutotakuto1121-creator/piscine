/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 06:09:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/07 10:16:31 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	determin_ary(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

int	determin_exception(char *base)
{
	int	i;
	int	j;

	if (!base || determin_ary (base) < 2)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		j = 0;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		n;
	long	nb;

	nb = nbr;
	if (determin_exception (base))
		return ;
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	n = determin_ary (base);
	if (nb >= n)
		ft_putnbr_base (nb / n, base);
	write (1, &base[nb % n], 1);
}

// int	main(void)
// {
// 	int	nbr = -810;
// 	char *base = "0123456789abcdef";
// 	ft_putnbr_base (nbr, base);
// 	return (0);
// }
