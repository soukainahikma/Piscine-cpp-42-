NAME = a.out

SRC =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		DiamondTrap.cpp\

OBJ = $(SRC:.cpp=.o)

HEADERS = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp 

all: $(NAME) $(OBJ)

$(NAME): $(OBJ)
	clang++ -Wall -Wextra -Werror -std=c++98 $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	clang++ -Wall -Wextra -Werror -std=c++98 -o $@ -c $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)