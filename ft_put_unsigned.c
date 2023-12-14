#include "ft_printf.h"

static unsigned int ft_count_nbr(unsigned int n)
{
	int i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_put_unsigned(unsigned int nb)
{
	char		c;
	unsigned int len;

	len = ft_count_nbr(nb);
	if (nb <= 9)
	{
		c = nb + '0';
		ft_putchar(c);
	}
	else
	{
		ft_put_unsigned(nb / 10);
		ft_put_unsigned(nb % 10);
	}
	return (len);
}