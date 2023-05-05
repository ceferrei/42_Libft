/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 10:40:26 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 22:00:37 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}
/*
//permet de copier un bloc de mémoire spécifié par le paramètre source , et dont
//la taille est spécifiée via le paramètre n , dans un nouvel emplacement
// désigné par le paramètre destination .
//The memory areas MUST NOT OVERLAP.
int	main(void)
{
	char dest[50] = "Este vai ser substituido";
	char src[50] = "Substituido por este";

	ft_memcpy(dest, src, 20);
	printf("%s\n", dest);
	return (0);
}
*/