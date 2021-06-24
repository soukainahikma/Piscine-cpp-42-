NAME = Moar_brainz
SRC =	main.cpp\
		Zombie.cpp\
		ZombieHorde.cpp\

HEADERS = ./Zombie.hpp
all: $(NAME) $(HEADERS)

$(NAME): $(SRC) $(HEADERS)
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)