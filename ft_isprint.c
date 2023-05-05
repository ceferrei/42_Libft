/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:10:54 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 17:19:49 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf ("Result from digit is: %d", ft_isprint(c));
	c = 'a';
	printf ("\nResult from alpha is: %d", ft_isprint(c));
	c = '\0';
	printf ("\nResult from non-printable is: %d\n", ft_isprint(c));
	return (0);
}
*/