/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:26:21 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 13:19:23 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((ft_isalpha(c) || ft_isdigit(c)));
}
/*
int	main(void)
{
	char	c;

	c = '1';
	printf ("Result from number is: %d", ft_isalnum(c));
	c = 'A';
	printf ("\nResult from uppercase alphabet is: %d", ft_isalnum(c));
	c = '!';
	printf ("\nResult  from special char is: %d\n", ft_isalnum(c));
	return (0);
}*/