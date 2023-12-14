NAME = libftprintf.a
C_FILES = ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_puthex.c ft_strlen.c ft_put_unsigned.c ft_strchr.c ft_printf.c
OBJ = $(C_FILES:.c=.o)
LIBC = ar rc
CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -f

all : $(NAME)

%.o : %.c ft_printf.h
	$(CC) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	$(LIBC) $(NAME) $(OBJ)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : clean