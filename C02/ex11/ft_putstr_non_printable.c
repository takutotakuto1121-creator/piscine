/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 07:24:22 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/30 16:58:03 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char str)
{
	write (1, &str, 1);
}

void	putspecial(char str)
{
	int		i;
	int		h;
	int		j;
	char	hex_chars[16];

	i = 0;
	while (i < 10)
	{
		hex_chars[i] = i + '0';
		i++;
	}
	while (i < 16)
	{
		hex_chars[i] = i + 87;
		i++;
	}
	h = (int)str / 16;
	j = (int)str % 16;
	write (1, "\\", 1);
	write (1, &hex_chars[h], 1);
	write (1, &hex_chars[j], 1);
}

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((0 <= str[i] && str[i] <= 31) || str[i] == 127)
		{
			putspecial (str[i]);
		}
		else
		{
			ft_putchar (str[i]);
		}
		i++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	str[] = "HAL\nF";
// 	 ft_str_is_uppercase (str);
// }
