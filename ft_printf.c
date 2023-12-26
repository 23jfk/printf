/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:23:01 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 15:54:40 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_check(const char *input, va_list args)
{
	int res;

	res = 0;
	if (*input == 'c')
		ft_putchar(va_arg(args, int), &res);
	else if (*input == 's')
		ft_putstr(va_arg(args, char *), &res);
	else if (*input == 'p')
	{
		ft_putstr("0x", &res);
		ft_putptr(va_arg(args, void *), &res);
	}
	else if (*input == 'd' || *input == 'i')
		ft_putnbr(va_arg(args, int), &res);
	else if (*input == 'u')
		ft_put_unsigned(va_arg(args, unsigned int), &res);
	else if (*input == 'x')
		ft_puthex(va_arg(args, unsigned int), &res, 'l');
	else if (*input == 'X')
		ft_puthex(va_arg(args, unsigned int), &res, 'u');
	return (res);
}

int ft_printf(const char *input, ...)
{
	va_list args;
	int res;
	int i;

	res = 0;
	i = 0;
	if (write(1, "", 0) < 0)
		return (-1);
	va_start(args, input);
	while (input[i])
	{
		if (input[i] == '%')
		{
			i++;
			if (ft_strchr("cspdiuxX", input[i]) )
				res += ft_check(input + i, args);
			else if (input[i] == '%')
				ft_putchar('%', &res);
			else
				break;
		}
		else
			ft_putchar(input[i], &res);
		i++;
	}
	va_end(args);
	return (res);
}