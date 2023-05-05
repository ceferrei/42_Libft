/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 14:58:38 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 13:40:54 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	if (n == 0)
		return (len_s);
	len_d = ft_strlen(dest);
	if (n < len_d)
		return (len_s + n);
	i = 0;
	while (src[i] && len_d + i < (n - 1))
	{
		dest[len_d + i] = src[i];
		i++;
	}
	dest[len_d + i] = '\0';
	return (len_d + len_s);
}
/*
//appends the NUL-terminated string src to the end of dst. 
//It will append at most size - strlen(dst) - 1 bytes, 
//NUL-terminating the result.

int	main(void)
{
	char	src[] = ", e o fim.";
	char	dest[50] = "O inicio_";

	printf("%ld\n", ft_strlcat(dest, src, 16));
	printf("%s\n", dest);
	return (0);
}
*/