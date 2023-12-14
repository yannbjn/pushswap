#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 02:30:43 by gemartin          #+#    #+#              #
#    Updated: 2023/12/14 15:21:56 by yabejani         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

NAME_BONUS = checker

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

SRCS = ./pushswap.c ./ft_strlen.c ./ft_atoi.c ./swap.c ./sortnum.c \
			./changenum.c ./sa.c ./rra.c ./ra.c ./rrb.c \
			./size3.c ./size5.c ./size100.c ./size500.c \
			./rb.c ./rr.c ./sb.c ./rrr.c ./check_order.c \
			./check_same_nums.c ./ft_free.c ./ordernums_peq.c ./ordernums.c \
			./pa.c ./pb.c ./check_num.c ./ft_isdigit.c \
			./ft_substr.c ./ft_free2.c ./check_args.c

BONUS_SRC = ./checker_bonus.c ./ss_bonus.c ./sa_bonus.c ./sb_bonus.c ./pa_bonus.c \
				./rb_bonus.c ./rr_bonus.c ./rra_bonus.c ./rrb_bonus.c ./rrr_bonus.c ./swap_bonus.c \
				./get_next_line_bonus.c ./checker_lines_bonus.c ./check_same_nums_bonus.c \
				./utils_bonus.c ./check_args_bonus.c ./pb_bonus.c ./ra_bonus.c

INCLUDE = ./pushswap.h

INCLUDE_BONUS = ./pushswap_bonus.h

CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -MMD

%.o: %.c
			@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}
DEPS = $(addsuffix .d, $(basename $(SRCS)))
DEPS2 = $(addsuffix .d, $(basename $(BONUS_SRC)))

all:	${NAME}

-include ${DEPS}
${NAME}: ${OBJS} $(INCLUDE)
	@${CC} ${SRCS} -o ${NAME}
	@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

-include ${DEPS2}
bonus: ${BONUS_OBJS}
				@touch $@
				@${CC} ${BONUS_SRC} -o ${NAME_BONUS}
				@echo "\n$(GREEN)Created ${NAME_BONUS} ✓$(DEF_COLOR)\n"

clean:
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean: 
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@${RM} bonus
			@${RM} ${NAME} ${NAME_BONUS}
			@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
