CC = clang++
FLAGS = -Wall -Wextra -Werror
NAME = iter
SRC = iter.cpp

.PHONY: re clean fclean all

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

%.o: %.cpp
	$(CC) -o $@ -c  $< $(FLAGS)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
