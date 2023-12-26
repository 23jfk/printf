NAME = libftprintf.a
C_FILES = ft_printf.c ft_put_unsigned.c ft_putchar.c ft_putnbr.c ft_puthex.c ft_strlen.c ft_putptr.c ft_strchr.c ft_putstr.c
OBJ = $(C_FILES:.c=.o)
CC = cc
FLAGS = -Wall -Wextra -Werror
LIBC = ar rc
RM = rm -f

all : $(NAME)

%.o:%.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

run : re
	make clean
	$(CC) $(FLAGS) main.c $(NAME) && clear && ./a.out

.PHONY : clean