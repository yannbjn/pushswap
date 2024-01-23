vpath %.c srcs

NAME	=	push_swap

RM		= rm -rf

CC		=	cc

CFLAGS	=	-Wall -Wextra -Werror

LIBFT	=	./libft

LIBS	=	/inc

HEADER  =	

FILES	=	push_swap.c \
			ft_utils_parse.c \
			ft_utils_lst.c \
			ft_utils2_lst.c \
			ft_parsing.c \
			ft_create_stack.c \
			ft_push.c \
			ft_swap.c \
			ft_rotate.c \
			ft_rev_rotate.c \
			ft_fill_anodes.c \
			ft_fill_bnodes.c \
			ft_sort_utils.c \
			ft_both_rotate.c \
			ft_sort.c \
			ft_sort_three.c

OBJ_DIR	=	builds

OBJS	=	$(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))

all:	$(NAME)

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I.$(LIBS) -c $< -o $@

$(NAME): $(OBJS) $(HEADER)
	@echo "\033[33;34m=== Compilation de la libft ==="
	@make -C $(LIBFT)
	@echo "         === DONE ===\033[0m"
	@echo "\033[33;32m=== Creation de push_swap ==="
	@echo "\033[33;32m   === push_swap ready ==="
	@$(CC) $(OBJS) $(CFLAGS) $(LIBFT)/libft.a -L -lft -o $(NAME)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@echo "\033[33;36m=== cleaning builds ==="
	@make clean -C $(LIBFT)
	@$(RM) $(OBJS) ./builds

fclean: clean
	@echo "\033[33;31m=== deleting ./push_swap, libft.a and builds directory ==="
	@make fclean -C $(LIBFT)
	@$(RM) $(NAME) 

re:	fclean all

.PHONY: all clean fclean re