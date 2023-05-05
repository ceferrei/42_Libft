/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:03 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/14 11:30:41 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || ! del)
		return ;
	del(lst->content);
	free(lst);
}

//possui como parametro, um node e liberta a memoria do conteudo do no
//usando a funcao del dada como parametro e liberta o node. A memria do 
//next tambem tem de se libertar
