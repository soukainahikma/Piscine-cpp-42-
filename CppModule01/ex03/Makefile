NAME = Unnecessary_violence
SRC =	main.cpp\
		Weapon.cpp\
		HumanA.cpp\
		HumanB.cpp\

OBJ = $(SRC:.cpp=.o)
HEADERS = ./HumanB.hpp ./HumanA.hpp ./Weapon.hpp

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