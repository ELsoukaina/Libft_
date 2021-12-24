/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 20:13:12 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 20:17:44 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (start > (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	if (start < ft_strlen(s))
	{
		if (len > ft_strlen(s) - start)
			ft_strlcpy(res, (char *)(s + start), ft_strlen(s) + 1);
		ft_strlcpy(res, (char *)(s + start), len + 1);
	}
	return (res);
}
