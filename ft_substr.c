/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:08:49 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:00:51 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	i = 0;
	j = 0;
	str = malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (0);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}
/*
//La méthode substr() retourne la partie d'une chaîne de caractères comprise 
//entre l'indice de départ et un certain nombre de caractères après celui-ci.

int	main()
{
	char	src[] = "CeciliaMarcal";
	int	start = 7;
    int	len = 6;
    char* dest = ft_substr(src, start, len);
    printf("%s\n", dest);
    return 0;
}
*/