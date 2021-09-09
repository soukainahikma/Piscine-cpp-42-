NAME = a.out

SRC =	main.cpp\
		Bureaucrat.cpp\
		Form.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\

OBJ = $(SRC:.cpp=.o)

HEADERS =	Bureaucrat.hpp\
			Form.hpp\
			RobotomyRequestForm.hpp\
			ShrubberyCreationForm.hpp\
			PresidentialPardonForm.hpp\
			Intern.hpp\

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