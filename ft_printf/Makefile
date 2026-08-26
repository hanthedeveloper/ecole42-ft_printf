NAME = libftprintf.a

SRCS = ft_printf.c ft_printfstring.c ft_printfnumber.c ft_printfhex.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re