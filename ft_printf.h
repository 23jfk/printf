#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int ft_printf(const char *input, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int ft_putptr(void *p);
int ft_putnbr(int n);
int ft_put_unsigned(unsigned int nb);
int	ft_puthex(unsigned int nb, char typ);
size_t	ft_strlen(const char *s);
int	ft_strchr(const char *s, int c);

#endif

