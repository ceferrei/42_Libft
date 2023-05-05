/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:10:33 by ceferrei          #+#    #+#             */
/*   Updated: 2022/11/23 14:57:43 by ceferrei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
/*Outputs the character ’c’ to the given file
descriptor.*/
/*fd e um inteiro que armazena dados, por ex um ficheiro. e esse ficheiro tem 
um caminho. 
qnd pedes para abrir da um numero e e com esse numero que acede ao 
ficheiro (pelo av nome do ficheiro e ac modo de aberura)
devolve valor: 0 input, 1 Outputs e 2 erro.*/
