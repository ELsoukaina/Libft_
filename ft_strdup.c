/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 18:03:16 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 18:06:22 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	char	*res;

	res = malloc(ft_strlen(source) + 1);
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, source, ft_strlen(source) + 1);
	return (res);
}
