/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:24:09 by sel-jala          #+#    #+#             */
/*   Updated: 2021/12/24 16:43:38 by sel-jala         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newlst_head;

	newlst_head = NULL;
	newlst = NULL;
	if (lst)
	{
		newlst = ft_lstnew(f(lst->content));
		newlst_head = newlst;
		while (lst->next)
		{
			newlst->next = ft_lstnew(f((lst->next)->content));
			if (!newlst->next)
			{
				ft_lstclear(&newlst_head, del);
				return (NULL);
			}
			lst = lst->next;
			newlst = newlst->next;
		}
	}
	return (newlst_head);
}
