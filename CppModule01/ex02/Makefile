NAME = HI_THIS_IS_BRAIN
SRC =	main.cpp\

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)