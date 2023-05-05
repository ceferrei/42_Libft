/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:24:52 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/21 17:58:13 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*str;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new; //envia o conteudo de new para lst
		return ;
	}
	str = ft_lstlast(*lst); //retorna o ultimo node da lista lst
	str->next = new;
}

//adiciona o node new no final da lista
