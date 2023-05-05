/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:46:54 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:53:50 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{	
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((unsigned char *)(str + i));
		i++;
	}
	return (0);
}

//locates the first occurrence of c (converted to an
//unsigned char) in string s. Returns a pointer to the byte located, or NULL
//if no such byte exists within n bytes.

/* int main(void)
{
    char str[] = "cecilia";
    int c = 'i';
    size_t  n = 6;
    char    *sn;

    sn = ft_memchr(str, c, n);
    printf("Result: %c\n", *sn);
    return (0);
}
 */