NAME = a.out

SRC =	main.cpp\

OBJ = $(SRC:.cpp=.o)

HEADERS =	

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