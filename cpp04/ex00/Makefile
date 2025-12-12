NAME		=	prog
CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		=	main.cpp \
				Animal.cpp \
				Cat.cpp \
				Dog.cpp

COMPILED	=	$(SRCS:.cpp=.o)

RM			=	rm -f

all:		$(NAME)

$(NAME):	$(COMPILED)
			$(CXX) $(CXXFLAGS) -o $(NAME) $(COMPILED)

%.o:		%.cpp
			$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
			$(RM) $(COMPILED)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re