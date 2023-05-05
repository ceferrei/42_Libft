/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:56 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:55:26 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_cont(int n)
{
	size_t	cont;

	cont = 0;
	if (n <= 0)
		cont++;
	while (n != 0)
	{
		n = n / 10;
		cont++;
	}
	return (cont);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		i;
	size_t	cont;

	i = 1;
	cont = ft_cont(n);
	dest = malloc(sizeof(char) * (cont + 1));
	if (!dest)
		return (0);
	dest[cont] = '\0';
	cont--;
	if (n < 0)
	{
		dest[0] = '-';
		i = -1;
	}
	else if (n == 0)
		dest[cont] = '0';
	while (n)
	{
		dest[cont] = (((n % 10) * i) + '0');
		n = n / 10;
		cont--;
	}
	return (dest);
}

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/
/* int main(void)
{
	printf("%s\n", ft_itoa(247483648));
	return (0);
} */