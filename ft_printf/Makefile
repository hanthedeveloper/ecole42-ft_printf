NAME = libftprintf.a

SRCS = ft_printf.c \
	ft_print_string.c \
	ft_print_number.c \
	ft_print_hex.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c ft_printf.h
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
