# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sel-jala <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/24 23:03:39 by sel-jala          #+#    #+#              #
#    Updated: 2021/12/24 23:43:46 by sel-jala         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
SRCS= ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
      ft_isprint.c ft_memchr.c ft_memcpy.c ft_memmove.c \
      ft_memset.c ft_memcmp.c\
      ft_strchr.c ft_strlcpy.c ft_strlen.c ft_strnstr.c ft_atoi.c ft_strlcat.c\
      ft_strncmp.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCSBONUS= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c \
			ft_lstlast_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJ= $(SRCS:.c=.o)
OBJB= $(SRCSBONUS:.c=.o)

INCLUDE= libft.h

FLG= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
clean:
		/bin/rm -f $(OBJ)
		/bin/rm -f $(OBJB)

fclean: clean
		/bin/rm -f $(NAME)

bonus:	all $(OBJB)
		ar rc s $(NAME) $(OBJB)

%.o: %.c $(INCLUDE)
		gcc $(FLG) -c $< -I $(INCLUDE)

re: fclean all
