/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:59:10 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:55:04 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (c != *str && *str)
		str++;
	if (*str == c)
		return ((char *)str);
	return (0);
}

//locates the first occurrence of c (converted to a char)
//in the string pointed to by str. The terminating null 
//character is considered to be part of the string.
/* int	main(void)
{
	const char	str[] = "ola";
	int		c = 'l';
	
	printf("The first occurrence is: %s\n", ft_strchr(str, c));
	return (0);
} */