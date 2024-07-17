# **************************************************************************** #
# VARIABLES

NAME        = animals
CC          = c++
FLAGS       = -Wall -Wextra -Werror -Iinc -std=c++98 -g3 -MMD
RM          = rm -rf

SRCS_DIR    = src
OBJS_DIR    = bin

SRCS = src/Animal.cpp src/Cat.cpp src/Dog.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/main.cpp
OBJS = $(SRCS:.cpp=.o)

# **************************************************************************** #
# COLORS

GREEN       = \033[0;32m
GREY        = \033[1;30m
PURPLE      = \033[0;35m
BLUE        = \033[0;94m
CYAN        = \033[0;36m
PINK        = \033[1;35m
RED         = \033[0;31m
END_COLOR   = \033[0;39m

# **************************************************************************** #
# RULES

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN)[Success]$(END_COLOR) Animals is ready !"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS_DIR)
	@echo "$(GREY)[Clean]$(END_COLOR) Objects have been deleted"

fclean:
	@$(RM) $(OBJS_DIR) $(NAME) a.out src/*.d src/*.o
	@echo "$(GREY)[Clean]$(END_COLOR) $(NAME) and objects have been deleted"

re: fclean all
	@echo "$(PURPLE)[Rebuild]$(END_COLOR) Done."

-include $(OBJS:.o=.d)

.PHONY: all clean fclean re
