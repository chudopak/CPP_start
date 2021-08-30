NAME	= virtualDestructor
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
INC		= Animal.hpp Dog.hpp Cat.hpp Brain.hpp
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