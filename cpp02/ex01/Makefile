NAME	=	float
CXX		=	c++
FLAGS	=	-Wall -Werror -Wextra -std=c++98

SRCS	=	main.cpp Fixed.cpp
COMPIL	=	$(SRCS:.cpp=.o)

RM		=	rm -rf

all: $(NAME)

$(NAME): $(COMPIL)
	$(CXX) $(FLAGS) -o $(NAME) $(COMPIL)

%.o: %.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(COMPIL)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re