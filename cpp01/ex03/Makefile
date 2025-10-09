NAME	=	weapon
SRCS	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS	=	$(SRCS:.cpp=.o)
CXX		=	c++
CXXFLAGS=	-Wall -Wextra -Werror -std=c++98
RM		=	rm -f
INCLUDES=	-I.

all:	$(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re