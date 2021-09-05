NAME	= staticCast
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp TypeIdentifier.cpp TypeConvert.cpp InputArguments.cpp
INC		= TypeIdentifier.hpp TypeConvert.hpp Exception.hpp InputArguments.hpp
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