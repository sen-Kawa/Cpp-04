NAME = animal

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98 

HEADER_DIR = ./header

SRC_DIR = ./src/

OBJ_DIR = ./.build/

LIBS = -lm

SRCS = main.cpp Dog.class.cpp Animal.class.cpp Cat.class.cpp WrongAnimal.class.cpp WrongCat.class.cpp

RM = rm -rf

OBJ = $(SRCS:.cpp=.o)
OBJ_PREF := $(addprefix $(OBJ_DIR), $(OBJ))

$(NAME): $(OBJ_PREF) $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(OBJ_PREF) -I$(HEADER_DIR) $(LIBS) -o $@
	@echo "Success, executable ./$(NAME) created."

$(OBJ_PREF): .build/%.o: src/%.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@ -I$(HEADER_DIR)

all: $(NAME)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)
	@echo "Success, directory cleaned."

re: fclean all

.PHONY: all clean fclean re

