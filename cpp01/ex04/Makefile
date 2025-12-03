NAME	=	replace
CXX		=	clang++
FLAGS	=	-Werror	-Wextra	-Wall -std=c++98

SRCS	=	main.cpp
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