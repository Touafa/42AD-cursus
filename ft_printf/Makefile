NAME = libftprintf.a

SRC = 	./ft_printf.c ./ft_print_hex.c ./ft_print_ptr.c ./ft_print_unsigned.c ./ft_printchar.c ./ft_printnbr.c ./ft_printpercent.c ./ft_printstr.c

OBJS =	$(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all