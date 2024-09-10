NAME = fragtrap
CXX = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC= main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp

OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CPPFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re