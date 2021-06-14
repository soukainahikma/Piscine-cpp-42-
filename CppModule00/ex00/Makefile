NAME = megaphone
SRC =	megaphone.cpp\

all: $(NAME)

$(NAME): $(SRC)
	clang++ -Wall -Wextra -Werror -std=c++98 $(SRC) -o $(NAME)

clean:
	@rm -f $(NAME)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)