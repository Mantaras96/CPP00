NAME = megaphone

SRCS_DIR = ./
SRCS = megaphone.cpp

FLAGS = -Wall -Wextra -Werror

OBJS_DIR 	= 	objects/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@c++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@c++ $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@rm -rf $(OBJS_DIR)

fclean: clean
	@rm -f $(NAME)

re: fclean all