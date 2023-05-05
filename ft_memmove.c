/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:03:25 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:54:01 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "string.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (0);
	if (src < dest)
	{
		while (n)
		{
			n--;
			((char *)dest)[n] = ((char *)src)[n];
		}
	}
	else if (src > dest)
		ft_memcpy(dest, src, n);
	return (dest);
}

//La fonction memmove() copie n octets depuis la zone mémoire src
//vers la zone mémoire dest. Les deux zones peuvent se chevaucher : la copie 
//se passe comme si les octets de src étaient d'abord copiés dans une zone 
//temporaire qui ne chevauche ni src ni dest, et les octets sont ensuite 
//copiés de la zone temporaire vers dest.

/* int	main(void)
{
	char dest[] = "Substituido por este";
	char src[] = "Este vai ser sub";
	char dest1[] = "Substituido por este";


	ft_memmove(dest, src, sizeof(src));
	printf("a minha %s\n", dest);
	memmove(dest1, src, (sizeof(src)));
	printf("a deles %s\n", dest1);
	return (0);
} */