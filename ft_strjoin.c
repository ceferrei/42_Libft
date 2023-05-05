/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:15 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:04:50 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		l;
	char	*s3;

	i = 0;
	l = 0;
	if (!s1 || !s2)
		return (0);
	s3 = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!s3)
		return (NULL);
	if (s3 && s1 && s2)
	{
		while (s1[i] != '\0')
			s3[l++] = s1[i++];
		i = 0;
		while (s2[i] != '\0')
			s3[l++] = s2[i++];
	}
	s3[l] = '\0';
	return (s3);
}
/*
//Allocates (with malloc(3)) and returns a new string, which is the result of 
//the concatenation of ’s1’ and ’s2’
int	main(void)
{
	char s1[] = "Po";
	char s2[] = " de arroz";

	printf("%s\n", ft_strjoin(s1, s2));
	return (0);
}
*/