/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:24:58 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/21 17:50:53 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;//we set our link new's element next to the first  link that is pointed to by lst in our parameters.
	*lst = new;//definimos o ponteiro de lst para new, definindo-o assim no início de nossa lista vinculada.
}

/*Adds the node ’new’ at the beginning of the list.
lst: The address of a pointer to the first link of
a list.

adicionamos um link, chamado new, que e' 
passado nos parametros, para uma lista e colocamos este link no inicio da lista.

new: The address of a pointer to the node to be
added to the list.*/