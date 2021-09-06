NAME = a.out

SRC =	main.cpp\
		Animal.cpp\
		WrongAnimal.cpp\
		WrongCat.cpp\
		Cat.cpp\
		Dog.cpp

OBJ = $(SRC:.cpp=.o)

HEADERS =	Animal.hpp\
			WrongAnimal.hpp\
			Dog.hpp\
			Cat.hpp\
			WrongCat.hpp\

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