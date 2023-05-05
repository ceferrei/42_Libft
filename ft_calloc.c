/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:49:58 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 11:52:23 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *) malloc (nitems * size);
	if (!str)
		return (0);
	while (i < nitems * size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

//allocates the requested memory and returns a pointer to it. The
//difference in malloc and calloc is that malloc does not set the memory
//to zero where as calloc sets allocated memory to zero.
/*
int	main(void)
{
	size_t	nitems = 10;
	size_t	size = 4;
	size_t	i = 0;
	char	*res = (char *)ft_calloc(nitems, size);
	
	while (i < size * nitems)
	{
		printf("%c\n", res[i]);
		i++;
	}
	return (0);
}
*/