# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kilkim <kilkim@student.42.us.org>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/14 01:18:24 by kilkim            #+#    #+#              #
#    Updated: 2020/04/15 07:48:59 by kilkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIB_D = ./sources
INC_D = ./includes
OBJ_D = objs

CC = gcc
CFLAGS = -Wall -Wextra -Werror

INCLUDES = -I $(INC_D)

CHECK = \033[0;33m\xE2\x9C\x94\033[0m
CYAN  = \x1B[36m
GREEN = \x1B[1;32m
YELLO = \x1B[1;4;33m
EOC   = \033[0m

all: obj $(NAME)

obj:
	@mkdir -p $(OBJ_D)
	@echo ""
	@echo "$(CYAN)  [     ] Make LIBFT_A [ $(GREEN) 0  / 100 %$(CYAN) ] : )$(EOC)\c"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $(LIB_D)/*.c
	@mv *.o $(OBJ_D)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ_D)/*.o
	@ranlib $(NAME)
	@echo "\r$(CYAN)  [  $(CHECK)$(CYAN)  ] Make LIBFT_A [ $(YELLO)100 / 100%$(EOC)$(CYAN)  ] : )$(EOC)"
	@echo ""

clean:
	@echo ""
	@echo "$(CYAN)  [     ] Makefile has been $(YELLO)cleaned$(EOC)$(CYAN) : )$(EOC)\c"
	@rm -rf $(OBJ_D)
	@echo "\r$(CYAN)  [  $(CHECK)$(EOC)"
	@echo ""

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re