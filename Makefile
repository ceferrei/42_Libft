# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ceferrei <ceferrei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 12:46:39 by ceferrei          #+#    #+#              #
#    Updated: 2022/11/23 14:49:19 by ceferrei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

LIBFT_SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c \
				ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c \
	  			ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
LIB_OBJS = $(LIBFT_SRC:.c=.o) #VAI BUSCAR OS FICHEIROS .C, MAS SUBSTITUI POR .O

BONUS_SRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
BONUS_OBJS = $(BONUS_SRC:.c=.o)

all: $(NAME)#comando principalpara criar o programa. Temos de lhe dizer do que ela depende e colocamos e mesmo nome em baixo, programa alvo. Funciona como um pointer

$(NAME): $(LIB_OBJS)#name vai efetuar a compilacao, ele chama o cc... chama o name e src que quero compilar
	ar rc $(NAME) $(LIB_OBJS)
	
bonus:	$(LIB_OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(LIB_OBJS) $(BONUS_OBJS)
#o ar permite alterar uma library, adicionar lementos, apagar, extrair ou print...o rc (r) para replace os antigos conteudos pelos novos, (c) create a library caso nao exista
clean:
	$(RM) $(LIB_OBJS) $(BONUS_OBJS) 

fclean: clean 
	$(RM) $(NAME)
#com o clean elimina o a.out mas guarda o executavel, com fclean elimina ambos
re: fclean all
#reset compilacao, retomamos do zero com um ambiente limpo
so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(LIBFT_SRC) $(BONUS_SRC)
	$(CC) -nostartfiles -shared -o libft.so $(LIB_OBJS) $(BONUS_OBJS)