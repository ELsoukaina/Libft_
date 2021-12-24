/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:03:38 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 17:39:38 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (str1 == str2)
		return (str1);
	if (str1 == NULL && str2 == NULL)
		return (NULL);
	if (n == 0)
		return (str1);
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while ((n--) && ((*s2 || *s1)))
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return (str1);
}
