/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsugimot <tsugimot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/03 18:43:11 by tsugimot          #+#    #+#             */
/*   Updated: 2026/04/03 19:27:55 by tsugimot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		while (is_sep (str[i], charset) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
			words++;
		while (!is_sep (str[i], charset) && str[i] != '\0')
			i++;
	}
	return (words);
}

char	*ft_words(char *str, char *charset)
{
	char	*word;
	int		i;

	i = 0;
	while (!is_sep (str[i], charset) && str[i] != '\0')
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (!is_sep (str[i], charset) && str[i] != '\0')
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		i;
	int		words;
	int		k;

	i = 0;
	k = 0;
	words = count_words (str, charset);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	while (str[i] != '\0')
	{
		while (is_sep (str[i], charset) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			split[k] = ft_words (&str[i], charset);
			k++;
		}
		while (!is_sep (str[i], charset) && str[i] != '\0')
			i++;
	}
	split[k] = NULL;
	return (split);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *str = "Hello \n world hello";
// 	char *charset = " \n";
// 	char **split = ft_split (str, charset);
// 	int i = 0;
// 	while (split[i])
// 	{
// 		printf("%s\n", split[i]);
// 		i++;
// 	}
// }
