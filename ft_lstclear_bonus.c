/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:12:48 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/21 20:15:20 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actuel;

	actuel = NULL;
	if (del == NULL)
		return ;
	while (*lst)
	{
		actuel = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = actuel;
	}
	*lst = NULL;
}
