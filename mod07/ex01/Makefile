NAME	= iter
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp
INC		= iter.hpp TestClass.hpp
OBJ		= $(SRC:.cpp=.o)


%.o: %.cpp $(INC)
	clang++ $(FLAGS) -o $@ -c $<

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(FLAGS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: re all clean fclean