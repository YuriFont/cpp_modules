NAME = horde
FILES = Zombie.cpp\
		zombieHorde.cpp\
		main.cpp
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

valgrind:
		valgrind --leak-check=full ./$(NAME)

.PHONY: all clean fclean re
