/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:09:44 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 19:15:57 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

size_t	wordlen(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

static size_t	wordcount(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	return (count);
}
/* 
static char	*wordcpy(char *dst, const char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
} */

static char	**ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((wordcount(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j++] = ft_substr(s, i, wordlen(&s[i], c));
			if (!str[j - 1])
				return (ft_free(str));
			i += wordlen(&s[i], c);
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
//variavel static mantem  o seu valor entre invocacoes
//Allocates (with malloc(3)) and returns an array
//of strings obtained by splitting ’s’ using the
//character ’c’ as a delimiter. The array must end
//with a NULL pointer.
/* int	main()
{
    char *a = "iiiceciliaiii";
	char	**str;
	int	i = 0;
	
    str = ft_split(a, 'i');

	while(i < 3) {
		printf("Linha %d: %s\n", i, str[i]);
		i++;
		free(str);
	}
	
	return (0);
} */
/* #include <stdio.h>
int main()
{
    char    *texto = "sp lit mui to      fic il fd s";
    char    delimiter = ' ';
    char    **array;
    int     size;
    int     i;
    i = 0;
    size = 7;
    //size = arraysize(texto, delimiter) + 1;
    array = ft_split(texto, delimiter);
    while(i <= size)
    {
        printf("%s\n", array[i++]);
		free(*array);
    }
	return(0);
} */

/* int main(int argc, char **argv)
{
	(void)argc;
	char **res = ft_split(argv[2], argv[1][0]);

	int i;
	for(i = 0; res[i]; i++)
		printf("%d = %s\n", i, res[i]);
	printf("%d = NULL\n", i);
} */