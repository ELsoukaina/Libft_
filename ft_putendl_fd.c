/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:53:14 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/23 17:54:55 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
		ft_putchar_fd('\n', fd);
	}
}
