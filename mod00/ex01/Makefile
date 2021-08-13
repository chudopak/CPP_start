NAME	= phoneBook
FLAGS	= -Wall -Wextra -Werror
SRC		= phoneBook.cpp
INC		= 
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