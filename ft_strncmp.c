/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 13:35:13 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 13:55:31 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i] && i < n)
			i++;
	if (n == 0 || n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
//compares not more than n characters.
/*
int	main(void)
{
	char	s1[] = "ola";
	char	s2[] = "ole";

	printf("%d\n", ft_strncmp(s1, s2, 3));
}
*/