/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 15:57:52 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 17:28:54 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int x, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = x;
		i++;
	}
	return (ptr);
}
/*
//writes n bytes of value x (converted to an unsigned char) to the string ptr.
//permet de remplir une zone mémoire, identifiée par son adresse et sa taille, 
//avec une valeur précise (x).

int	main(void)
{
	char	str[50] = "xxxxx o inicio tem de ser tudo a";

	ft_memset(str, 'a', 5);
	printf("%s\n", str);
	return (0);
}
*/