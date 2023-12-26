/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:26:47 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 13:00:40 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_count_nbr(int n)
{
	int	i;

	i = 1;
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

void	ft_putnbr(int n, int *count)
{
	long	nb;
	int		len;

	nb = n;
	len = ft_count_nbr(nb);
	if (nb < 0)
	{
		ft_putchar('-', count);
		nb *= -1;
	}
	if (nb < 10)
	{
		ft_putchar((nb + '0'), count);
	}
	else if (nb > 9)
	{
		ft_putnbr((nb / 10), count);
		ft_putchar((nb % 10) + '0', count);
	}
}
