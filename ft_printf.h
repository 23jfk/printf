/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: messkely <messkely@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 21:23:24 by messkely          #+#    #+#             */
/*   Updated: 2023/12/25 15:55:07 by messkely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int		ft_printf(const char *input, ...);
void	ft_putchar(char c, int *count);
void	ft_putstr(char *s, int *count);
void	ft_putptr(void *p, int *count);
void	ft_putnbr(int n, int *count);
void	ft_put_unsigned(unsigned int nb, int *count);
void	ft_puthex(unsigned int nb, int *count, char typ);
size_t	ft_strlen(const char *s);
int		ft_strchr(const char *s, int c);

#endif
