NAME = a.out

SRC =	AMateria.cpp\
		Ice.cpp\
		Cure.cpp\
		Character.cpp\
		main.cpp\

OBJ = $(SRC:.cpp=.o)

HEADERS =	AMateria.hpp\
			Ice.hpp\
			Cure.hpp\
			ICharacter.hpp\
			Character.hpp\
		

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