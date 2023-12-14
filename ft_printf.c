#include "ft_printf.h"

static int ft_check(const char *input, va_list args)
{
    int res;

    res = 0;
    if (*input == 'c')
        res += ft_putchar(va_arg(args, int));
    else if (*input == 's')
        res += ft_putstr(va_arg(args, char *));
    else if (*input == 'p')
    {
        ft_putstr("0x");
        res += ft_putptr(va_arg(args, void *));
    }
    else if (*input == 'd' || *input == 'i')
        res += ft_putnbr(va_arg(args, int));
    else if (*input == 'u')
        res += ft_put_unsigned(va_arg(args, unsigned int));
    else if (*input == 'x')
        res += ft_puthex(va_arg(args, unsigned int), 'l');
    else if (*input == 'X')
        res += ft_puthex(va_arg(args, unsigned int), 'u');
    return res;
}

int ft_printf(const char *input, ...)
{
    va_list args;
    int res = 0; 
    int i = 0;  

    va_start(args, input);
    while (input[i])
    {
        if (input[i] == '%')
        {
            i++;
            if (ft_strchr("cspdiuxX", input[i]))
                res += ft_check(input + i, args);
            else if (input[i] == '%')
                res += ft_putchar('%');
        }
        else
            res += ft_putchar(input[i]);
        i++;
    }
    va_end(args);
    return res;
}