/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:31:29 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/22 16:58:38 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int i)
{
	return ((i >= '0' && i <= '9'));
}
/*
int	main(void)
{
	char	c;

	c = '6';
	printf("Result from numeric char is: %d", ft_isdigit(c));
	c = 'a';
	printf("\nResult from a non-numeric char is: %d", ft_isdigit(c));
	c = '!';
	printf("\nResult from a non-alphabetic char is: %d\n", ft_isdigit(c));
	return (0);
}
*/