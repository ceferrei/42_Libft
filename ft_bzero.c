/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:48:06 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/14 11:43:22 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = 0;
		i++;
	}
}
// La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets
// du bloc pointé par s.
/*
int	main(void)
{
	char	str[50] = "xxxxxxx";

	ft_bzero(str, 5);
	printf("Se meter tudo a null nao aparece nada aqui:%s\n", str);
	return (0);
}
*/