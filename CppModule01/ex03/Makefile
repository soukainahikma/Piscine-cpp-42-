NAME = Unnecessary_violence
SRC =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

HEADERS = ./HumanB.hpp ./HumanA.hpp ./Weapon.hpp
all: $(NAME) $(HEADERS)

$(NAME): $(SRC) $(HEADERS)
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)