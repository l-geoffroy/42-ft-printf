# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgeoffro <lgeoffro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/04 12:40:20 by lgeoffro          #+#    #+#              #
#    Updated: 2021/08/04 12:40:20 by lgeoffro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 	=	srcs/ft_printf.c \
			srcs/core.c \
			srcs/parse/format.c \
			srcs/handler/char.c \
			srcs/handler/string.c \
			srcs/handler/ptr.c \
			srcs/handler/int.c \
			srcs/handler/uint.c \
			srcs/handler/hex.c \
			srcs/handler/per.c \
			srcs/utils/base_conv.c \
			srcs/utils/str_lower.c \
			srcs/utils/len_nbr.c \
			srcs/utils/u_putnbr.c \
			srcs/utils/len_u_nbr.c \

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -I includes

RM = rm -f

AR = ar rcs

LIBFTDIR = ./srcs/libft

LIBFT = $(LIBFTDIR)/libft.a

all : $(NAME)

$(LIBFT):
	@make -C $(LIBFTDIR) all

$(NAME) : $(LIBFT) $(OBJS)
	@echo "Creating $(NAME)"
	@cp $< $@
	@$(AR) $(NAME) $(OBJS)

bonus : all

clean :
	@echo "Cleaning up $(OBJS)"
	@$(RM) $(OBJS)
	@make -C $(LIBFTDIR) clean

fclean : clean
	@echo "Cleaning up $(NAME)"
	@$(RM) $(NAME)
	@make -C $(LIBFTDIR) fclean

re : fclean all

.PHONY : all clean fclean re
