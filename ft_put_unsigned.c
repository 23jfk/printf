/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:24:19 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 15:19:30 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static unsigned int	ft_count_nbr(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	ft_put_unsigned(unsigned int nb, int *count)
{
	char			c;
	unsigned int	len;

	len = ft_count_nbr(nb);
	if (nb <= 9)
	{
		c = nb + '0';
		ft_putchar(c, count);
	}
	else if (nb > 9)
	{
		ft_put_unsigned((nb / 10), count);
		ft_putchar((nb % 10) + '0', count);
	}
}
