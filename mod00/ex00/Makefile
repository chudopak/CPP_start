NAME	= megaphone

FLAGS	= -Wall -Wextra -Werror

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)


%.o: %.cpp
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
	./megaphone "shhhhh... I think the students are asleep..."
	@echo
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo
	./megaphone

.PHONY: re all clean fclean test