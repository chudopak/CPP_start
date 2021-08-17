NAME	= mySed
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp Sed.cpp
INC		=  Sed.hpp
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

test:
	cat file2 && ./mySed file2 like HATE && echo && cat file2.replace
	@echo
	cat file && ./mySed file mod01 exersize && echo && cat file.replace

.PHONY: re all clean fclean