/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:28:38 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 23:44:25 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
/*
//Cette fonction recherche la dernière occurrence du caractère passé en 
//second paramètre dans la chaîne de caractères spécifiée via le premier
//paramètre.

int	main(void)
{
	char	str[] = "olá";

	char	*c = ft_strrchr(str, 'l');
	printf("The last occurrence is: %s\n", c);
	return (0);
}*/