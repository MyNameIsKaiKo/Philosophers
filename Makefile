NAME		= philo 
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g #-fsanitize=address
RM			= rm -f

OBJ_DIR		= obj

VPATH		= parser:tools:philolst:datalst 

SRCS 		=	main.c \
				ft_strlen.c \
				ft_atoi.c \
				parser_philo.c \
				philolstnew.c \
				philolstfree.c \
				datalstnew.c
				
				

OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

INCLUDES	= -I includes -I src 

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Philo OK\n"

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean: 
	@$(RM) -r $(OBJ_DIR)
	@echo "Objects removed\n"

fclean: clean
	@$(RM) -r $(NAME)

re: fclean all

.PHONY : all clean fclean re
