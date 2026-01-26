CXX = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp ClapTrap.cpp
NAME = clap
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CXX) $(CXXFLAGS)  -o $(NAME) $(OBJS) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

re: fclean all

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

.PHONY: all re clean fclean
