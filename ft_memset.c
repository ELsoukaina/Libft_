/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:47:00 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 17:48:08 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//memset

void	*ft_memset(void *str, int c, size_t n)
{
	char	*res;
	size_t	i;

	res = (char *)str;
	i = 0;
	while (i < n)
	{
		res[i] = (char)c;
		i++;
	}
	return ((void *)res);
}
