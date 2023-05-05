/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:30:46 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 13:15:15 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	char	c;

	c = 'A';
	printf("Result from uppercase alphabet is : %d", ft_isalpha(c));
	c = 'a';
	printf("\nResult from lowercase alphabet is: %d", ft_isalpha(c));
	c = '?';
	printf("\nResult from non-alphabetic char is: %d\n", ft_isalpha(c));
	return (0);
}
*/