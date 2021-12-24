/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 23:28:16 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/24 22:39:36 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*rev_str(char *str, char *res, int i[2])
{
	while (i[0] > 0)
	{
		res[i[1]] = str[i[0] - 1];
		i[1]++;
		i[0]--;
	}
	return (res);
}

static void	handler(char (*str)[13], long x, int i)
{
	while (x > 0)
	{
		(*str)[i] = x % 10 + '0';
		x = (x - (x % 10)) / 10;
		i++;
	}
	(*str)[i] = '\0';
}

char	*ft_itoa(int n)
{
	char	str[13];
	char	res[13];
	long	x;
	int		i[2];

	x = n;
	i[0] = 0;
	i[1] = 0;
	ft_bzero(res, sizeof(res));
	ft_bzero(res, sizeof(res));
	if (x == 0)
	{
		res[i[0]] = '0';
		res[i[0] + 1] = '\0';
	}
	if (x < 0)
	{
		res[i[1]] = '-';
		x = x * (-1);
		i[1]++;
	}
	handler(&str, x, i[0]);
	i[0] = ft_strlen(str);
	return (ft_strdup(rev_str(str, res, i)));
}
