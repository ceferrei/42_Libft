/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:25:16 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/21 18:09:20 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;//1o declaramos a nova estrutura t_list chamada 'new'
	new = (t_list *)malloc(sizeof(t_list) * 1); //alocamos a memoria necessaria para a estrutura existir
	if (!new)
		return (0);
	new->content = content; //definimos nosso link new's o content recebe o content (eq a num)
	new->next = NULL;//definimos o próximo elemento de nossa nova lista de links como NULL para que saibamos que estamos no final da lista.
	return (new);//retornamos nosso novo link.
}

/*Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.*/
/*
int		main()
{
	char	str[] = "cecilia marcal";
	t_list	*elem;

	elem = ft_lstnew((void *)str);
	printf("\n%s\n", (char *)elem->content);
}*/