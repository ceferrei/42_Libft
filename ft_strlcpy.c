/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:37:53 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 22:37:55 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_s;

	len_s = ft_strlen(src);
	i = 0;
	if (!dest || !src)
		return (0);
	if (n)
	{
		while (src[i] && i < n - 1)
		{
				dest[i] = src[i];
				i++;
		}
		dest[i] = '\0';
	}
	return (len_s);
}
/*
//Copy and concatenate strings respectively
//Safer than strncpy
//copies up to size - 1 characters from the NUL-terminated 
//string src to dst, NUL-terminating the result.

int	main(void)
{
        char src[] = "Origem";
        char dest[] = "Destino";
        unsigned int n;
        n = 20;

        ft_strlcpy(dest, src, n);
        printf("%s\n", dest);
        return (0);
}
*/