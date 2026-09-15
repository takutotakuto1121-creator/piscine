/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmurai <kmurai@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 19:33:03 by tsugimot          #+#    #+#             */
/*   Updated: 2026/03/21 11:43:21 by kmurai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	literal;

	literal = 'a';
	while (literal <= 'z')
	{
		write(1, &literal, 1);
		literal ++;
	}
}

// int    main(void)
// {
//     ft_print_alphabet();
// 	return	(0);
// }
