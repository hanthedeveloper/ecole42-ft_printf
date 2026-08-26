NAME	=	libftprintf.a

SRC		=	ft_printf.c \
			ft_printfstring.c \
			ft_printfnumber.c \
			ft_printfhex.c

BSRC	=	ft_printf_bonus.c \
			ft_printf_bonus_utils

OBJ	=		$(SRC:.c=.o)
BOBJ	=	$(BSRC:.C=.O)

all: $(NAME)

%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus:

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re