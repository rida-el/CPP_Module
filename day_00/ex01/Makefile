NAME		= phonebook

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			= 	./contact.cpp \
				./phoneBook.cpp \
				./main.cpp

OBJ			=	$(SRC:%.cpp=%.o)


%.o:%.cpp *.hpp
	$(CC) $(CPPFLAGS)  -c $< -o $@

all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean all