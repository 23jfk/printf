#include "ft_printf.h"
#include <stdio.h>

static int ft_count_nbr(int n)
{
	int i = 1;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}
int	ft_putnbr(int n)
{
	long	nb;
	int len;

	nb = n;
	len = ft_count_nbr(nb);
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar((nb + '0'));
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10));
		ft_putchar((nb % 10) + '0');
	}
	return (len);
}