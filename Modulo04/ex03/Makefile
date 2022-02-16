# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoreira <mmoreira@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 02:23:01 by mmoreira          #+#    #+#              #
#    Updated: 2022/02/15 02:23:02 by mmoreira         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#______________________________________//_______________________________________
SRC_DIR	=	./ \
			./classes \
			./classes/inheritance \
			./classes/interface_Cha \
			./classes/interface_Mat
SRC		=	main.cpp \
			AMateria.cpp \
			Cure.cpp \
			Ice.cpp \
			Character.cpp \
			MateriaSource.cpp

OBJ_DIR	=	./builds
OBJ		=	$(patsubst %.cpp, $(OBJ_DIR)/%.o, $(SRC))

INCD_DIR=	-I ./ \
			-I ./classes \
			-I ./classes/inheritance \
			-I ./classes/interface_Cha \
			-I ./classes/interface_Mat
INCD	=	include.hpp \
			AMateria.hpp \
			Cure.hpp \
			Ice.hpp \
			ICharacter.hpp \
			Character.hpp \
			IMateriaSource.hpp \
			MateriaSource.hpp
#______________________________________//_______________________________________
vpath %.cpp $(SRC_DIR)
vpath %.hpp $(INCD_DIR)

NAME	=	exect

CFLAGS	=	-Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address -Wshadow

RM		=	rm -rf

CC		=	c++
#______________________________________//_______________________________________
all:			$(NAME)

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(INCD_DIR) -o $(NAME)
	@echo "\033[1;32m"
	@echo "/ ************************************ \\"
	@echo "|             exect Criado             |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

$(OBJ_DIR)/%.o:	%.cpp $(INCD)
	mkdir -p $(OBJ_DIR)
	$(CC) -c -o $@ $(CFLAGS) $(INCD_DIR) $<
#______________________________________//_______________________________________
clean:
	$(RM) $(OBJ_DIR)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|        Arquivos .o Deletados         |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"

fclean:		clean
	$(RM) $(NAME)
	@echo "\033[1;31m"
	@echo "/ ************************************ \\"
	@echo "|            exect Deletado            |"
	@echo "\\ ************************************ /"
	@echo "\033[0m"
#______________________________________//_______________________________________

re:			fclean all

.PHONY:		all clean fclean re
