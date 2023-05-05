/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:33 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 18:44:56 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const	*s1, char const *set)
{
	size_t	ini;
	size_t	fin;

	if (!s1 || !set)
		return (0);
	if (set[0] == '\0')
		return (ft_strdup(s1)); // copia a string para uma nova zona de memoria
	ini = 0;
	while (s1[ini] && ft_strchr(set, s1[ini]))
		ini++;
	fin = ft_strlen(s1) - 1;
	while (fin > ini && ft_strrchr(set, s1[fin]))
		fin--;
	return (ft_substr(s1, ini, fin - ini + 1));
}

/*
//permet de retirer les blancs en début et fin de chaîne. Les blancs considérés
//sont les caractères d'espacement (espace, tabulation, espace insécable, etc.) 
//ainsi que les caractères de fin de ligne (LF, CR, etc.).

int	main ()
{
	char	s[] = "   Este E O Caminho Certo   ";
	char	set[] = "\t\n ";
	printf("before: \n%s\n", s);
	printf("after: \n%s\n", ft_strtrim(s,set));
	return (0);
}

dest = malloc(sizeof(*s1) * (fin - ini + 1));
	if (!dest)
		return (0);
	i = 0;
	while (ini < fin)
		dest[i++] = s1[ini++];
	dest[i] = '\0';
	return (dest);
*/
