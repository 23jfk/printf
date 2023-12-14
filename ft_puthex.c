#include "ft_printf.h"

int	ft_puthex(unsigned int nb, char typ)
{
	int count;

	count = 0;
	if (nb < 16)
	{
		if (typ == 'l')
			count += ft_putchar("0123456789abcdef"[nb]);
		else if (typ == 'u')
			count += ft_putchar("0123456789ABCDEF"[nb]);
	}
	else
	{
		count += ft_puthex(nb / 16, typ);
		count += ft_puthex(nb % 16, typ);
	}
	return (count);
}
// #include <stdio.h>
// int main()
// {
// 	int p = ft_puthex(200,'l');
// 	ft_putchar('\n');
// 	printf("%d\n",p);
// 	printf("%x\n",200);
// }