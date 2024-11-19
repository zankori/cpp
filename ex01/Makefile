file = PhoneBook.cpp search.cpp add.cpp
out = phonebook
flags = -Wall -Wextra -Werror

all : 
	c++ $(flags) $(file) -o $(out)
clean : 
	rm -rf PhoneBook.o search.o add.o
fclean : clean
	rm -rf phonebook
re : fclean all