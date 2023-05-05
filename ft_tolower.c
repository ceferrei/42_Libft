/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:30:11 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/14 11:47:04 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
//converts an uppercase alphabet to a lowercase alphabet.

int	main(void)
{
	char	c = 'A';

	printf("converts uppercase to lowercase: %c\n", ft_tolower(c));
	return (0);
}
*/