# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hakawamo <hakawamo@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/08 16:25:02 by hakawamo          #+#    #+#              #
#    Updated: 2024/11/12 21:07:21 by hakawamo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_printf.c ft_output.c ft_output_hex.c ft_check_conversion.c

OBJS			= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I. 

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS) 

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re