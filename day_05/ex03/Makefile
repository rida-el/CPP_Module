NAME		= Bureaucrat

CC			=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98


SRC			= 	./main.cpp \
				./Bureaucrat.cpp \
				./AForm.cpp \
				./PresidentialPardonForm.cpp \
				./RobotomyRequestForm.cpp \
				./ShrubberyCreationForm.cpp \

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