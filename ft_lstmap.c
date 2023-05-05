/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:13 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 16:28:46 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*l;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (0);
	l = ft_lstnew(f(lst->content));
	if (!l)
		return (0);
	newlist = l;
	lst = lst->next;
	while (lst)
	{
		newlist = ft_lstnew(f(lst->content));
		if (newlist == 0)
		{
			ft_lstclear(&l, del);
			return (0);
		}
		ft_lstadd_back(&l, newlist);
		lst = lst->next;
	}
	return (l);
}
