/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:10:21 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/16 12:19:41 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

//Applies the function ’f’ to each character of the string ’s’, and
//passing its index as first argument
//to create a new string (with malloc(3)) resulting
//from successive applications of ’f’.

//Esta função aplica a função de parâmetro f a cada caractere de uma 
//string também passada em seu parâmetro precisamente na posição da string de 
//índice desse caractere. */

/*We start by creating our counter variable i as an unsigned variable to 
	 * compensate for the possibilty of a long string.*/

/*We then start at the beginning of our string and work our way until the
	 * end, applying the function f to each character. When our loop reaches
	 * the of the string the function is finished.*/