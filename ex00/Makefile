NAME = animal

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp

OBJ_DIR = obj
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))

all: $(OBJ_DIR) $(NAME)

$(OBJ_DIR):
	@echo "\033[34mCreating obj/ directory...\033[0m"
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: %.cpp
	@echo "\033[32mCompiling $<...\033[0m"
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "\033[33mCreating executable $(NAME)...\033[0m"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "\033[35mCompilation complete!\033[0m"

clean:
	@echo "\033[31mRemoving object files...\033[0m"
	@rm -rf $(OBJ_DIR)

fclean: clean
	@echo "\033[31mRemoving executable $(NAME)...\033[0m"
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re