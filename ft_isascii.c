/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:36:36 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 17:19:04 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf ("\nResult from number 1 is: %d", ft_isascii(c));
	c = '~';
	printf ("\nResult from ~ is: %d", ft_isascii(c));
	c = '	';
	printf ("\nResult from tab is: %d", ft_isascii(c));
	c = '_';
	printf ("\nResult from _ is: %d\n", ft_isascii(c));
	return (0);
}
*/