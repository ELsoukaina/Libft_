/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 20:02:35 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 20:04:06 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//strrchr

char	*ft_strrchr(const char *str, int c)
{
	char	*p;

	p = NULL;
	while (*str)
	{
		if (*str == (char)c)
			p = (char *)&(*str);
		str++;
	}
	if (*str == (char)c)
		p = (char *)&(*str);
	return (p);
}
