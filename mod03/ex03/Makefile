NAME	= DiamondTrap
FLAGS	= -Wall -Wextra -Werror
SRC		= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
INC		= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
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