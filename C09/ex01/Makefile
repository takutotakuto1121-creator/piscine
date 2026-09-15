NAME = libft.a
SRCDIR = srcs/
SRC_FILES = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
INCDIR = includes/
HEAD_FILES = ft.h
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(addprefix $(SRCDIR), $(SRC_FILES))
HEADS = $(addprefix $(INCDIR), $(HEAD_FILES))
OBJS = $(SRCS:.c=.o)

all: $(NAME)
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(SRCDIR)%.o : $(SRCDIR)%.c
	$(CC) $(FLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
