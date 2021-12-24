/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 15:56:20 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 16:00:00 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//memchr

void	*ft_memchr(const void *memoryBlock, int c, size_t size)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)memoryBlock;
	while (i < size)
	{	
		if (str[i] == (char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}
