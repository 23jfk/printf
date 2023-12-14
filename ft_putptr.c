#include "ft_printf.h"

int ft_putptr(void *p)
{
	unsigned long nb;
	int count;

	nb = (unsigned long)p;
	count = 0;
	if (nb < 16)
		count += ft_putchar("0123456789abcdef"[nb]);
	else
	{
		count += ft_putptr((void *)(nb / 16));
		count += ft_putptr((void *)(nb % 16));
	}
	return (count);
}