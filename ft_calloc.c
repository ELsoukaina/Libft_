/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 19:45:55 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/21 19:51:37 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*list;

	list = malloc(elementCount * elementSize);
	if (list == '\0')
		return (NULL);
	ft_bzero(list, elementCount * elementSize);
	return (list);
}
