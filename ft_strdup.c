/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:04:55 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 13:56:11 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*dup;
	unsigned int	j;

	dup = malloc((ft_strlen(src) + 1) * sizeof(char));
	j = 0;
	if (!dup)
		return (0);
	while (src[j])
	{
		dup[j] = src[j];
		j++;
	}
	dup[j] = '\0';
	return (dup);
}
/*
//la fonction strdup alloue une nouvelle zone de mémoire via la fonction 
//malloc afin d'y copier la chaîne de caractères initiale. Il est donc 
//impératif de libérer cette zone de mémoire après utilisation via la 
//fonction free.

int	main(void)
{
	char	*str = "Hello World !";
	char	*copy = ft_strdup(str);

	printf("%s", copy);
}
*/