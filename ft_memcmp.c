/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 11:16:53 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/14 11:44:42 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
//compares byte string s1 against byte string s2. Both 
//strings are assumed to be n bytes long.
int	main(void)
{
	char	str1[] = "Cecilia b";
	char	str2[] = "Cecilia c";

	int	i = ft_memcmp(str1, str2, 10);
	
	if (i > 0)
		printf("st1 is greater than str2\n");
	else if (i < 0)
		printf("st1 is less than str2\n");
	else
		printf("st1 is the same as str2\n");
	return (0);
}
*/