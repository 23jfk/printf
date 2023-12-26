/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:25:37 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 15:16:12 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int nb, int *count, char typ)
{
	if (nb < 16)
	{
		if (typ == 'l')
			ft_putchar("0123456789abcdef"[nb], count);
		else if (typ == 'u')
			ft_putchar("0123456789ABCDEF"[nb], count);
	}
	else if (nb > 9)
	{
		ft_puthex((nb / 16), count, typ);
		ft_puthex((nb % 16), count, typ);
	}
}
