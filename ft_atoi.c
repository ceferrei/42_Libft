/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:27:57 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 11:44:44 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}

//convert a string argument to an integer. ASCII to integer
//la fonction atoi retourne la valeur 0 si la chaîne de 
//caractères ne contient pas une représentation de valeur numérique.
/*
int		main()
{
    printf("ft_atoi || atoi\n");
	printf("    %d ||", ft_atoi("   +342"));
	printf(" %d\n", atoi("         +342"));
	printf("   %d ||", ft_atoi("    -342"));
	printf(" %d\n", atoi("         -342"));
	printf("      %d ||", ft_atoi(" --342"));
	printf(" %d\n", atoi("         --342"));
	printf("      %d ||", ft_atoi(" ++342"));
	printf(" %d\n", atoi("         ++342"));
	printf("      %d ||", ft_atoi(" +-342"));
	printf(" %d\n", atoi("         +-342"));
	return (0);
}
*/