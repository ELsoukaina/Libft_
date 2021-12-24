/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/24 16:20:35 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/24 17:17:38 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	lenstr(char const *str, char c)
{
	int	i;
	int	size;
	int	len;

	i = 0;
	size = ft_strlen(str);
	len = 0;
	while (i < size)
	{
		while (i < size && str[i] == c)
			i++;
		if (str[i] == 0)
			break ;
		while (i < size && str[i] != c)
			i++;
		len++;
	}
	return (len);
}

static char	*word_dup(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i[2];
	int		index;
	char	**split;

	if (!s)
		return (0);
	split = malloc((lenstr(s, c) + 1) * sizeof(char *));
	if (!split)
		return (0);
	i[0] = 0;
	i[1] = 0;
	index = -1;
	while (i[0] <= ft_strlen(s))
	{
		if (s[i[0]] != c && index < 0)
			index = i[0];
		else if ((s[i[0]] == c || i[0] == ft_strlen(s)) && index >= 0)
		{
			split[i[1]++] = word_dup(s, index, i[0]);
			index = -1;
		}
		i[0]++;
	}
	split[i[1]] = 0;
	return (split);
}
