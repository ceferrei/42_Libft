/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:31:18 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 11:39:21 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;	

	i = 0;
	j = 0;
	if ((!to_find || ! str) && n == 0)
		return (0);
	if (!to_find[j])
		return ((char *)str);
	while (str[i] && i < n)
	{
		j = 0;
		if (to_find[j] == str[i])
		{
			while (to_find[j] && str[i + j] && i + j < n
				&& str[i + j] == to_find[j])
				j++;
			if (to_find[j] == '\0')
				return ((char *)(str + i));
		}
		i++;
	}
	return (0);
}

//locates the first occurrence of the null-terminated string little
// in the string big, where not more than len characters are searched.
/*
int	main(void)
{
	char *str = "Olá, tudo bem?";
	char *to_find = "tudo";
	size_t n = 50;
	
	printf("%s\n", ft_strnstr(str, to_find, n));
}
*/