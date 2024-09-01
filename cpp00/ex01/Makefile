NAME = phonebook
FILES = main.cpp\
		Contact.cpp\
		PhoneBook.cpp
CP = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
STD = -std=c++98

all: $(NAME)

$(NAME):
		$(CP) $(CFLAGS) $(STD) $(FILES) -o $(NAME)

clean:
		$(RM) $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re
