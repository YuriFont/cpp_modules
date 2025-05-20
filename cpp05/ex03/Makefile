NAME = forms
FILE = C_shrubbery
FILES = main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp
CP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
		$(CP) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:
		$(RM) $(NAME) $(FILE)

fclean: clean

re: fclean all

valgrind:
		valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re
