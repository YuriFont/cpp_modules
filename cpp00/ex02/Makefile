NAME = tests
FILES = tests.cpp\
		Account.cpp
CP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
		$(CP) $(CPPFLAGS) $(FILES) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
