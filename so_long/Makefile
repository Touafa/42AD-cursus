NAME = so_long
CC = gcc
RM = rm -f
CFLAGS	= -Wall -Wextra -Werror
C_FILES = so_long.c game.c parsing.c move.c other_error.c map_error.c check.c free.c check_invalid_path.c
O_FILES = $(C_FILES:.c=.o)
LIB = libft/libft.a
LIBFT = cd libft && make
mlx = ./mlx/libmlx.a

$(NAME) : $(O_FILES)
		$(LIBFT)
		make -C ./mlx
		$(CC) $(CFLAGS) -o so_long $(O_FILES) $(LIB) $(mlx) -Lmlx -lmlx -framework OpenGL -framework AppKit 

%.o : %.c
	$(CC) -c $(CFLAGS) -Imlx $<

clean:
	$(RM) $(O_FILES)
	make -C ./libft clean

fclean: clean
	$(RM) $(NAME)
	make -C ./libft fclean

all: $(NAME)

re: fclean all