NAME = megaphone
FILE = megaphone.cpp
C++ = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
STD = -std=c++98

all: $(NAME)

$(NAME):
		$(C++) $(CFLAGS) $(STD) $(FILE) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
