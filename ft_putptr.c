/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:25:50 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 15:22:52 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putptr(void *p, int *count)
{
	unsigned long	nb;

	nb = (unsigned long)p;
	if (nb < 16)
		ft_putchar("0123456789abcdef"[nb], count);
	else
	{
		ft_putptr((void *)(nb / 16), count);
		ft_putptr((void *)(nb % 16), count);
	}
}
