/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:22:06 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 16:49:27 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_forma(va_list va, char p, int i)
{
	if (p == 'c')
		i += ft_putchar(va_arg(va, int));
	else if (p == 's')
		i += ft_putstr(va_arg(va, char *));
	else if (p == 'p')
		i += ft_putptr(va_arg(va, void *));
	else if (p == 'd')
		i += ft_putnbr(va_arg(va, int));
	else if (p == 'i')
		i += ft_putnbr(va_arg(va, int));
	else if (p == 'u')
		i += ft_putunbr(va_arg(va, unsigned int));
	else if (p == 'x')
		i += ft_puthex(va_arg(va, unsigned int));
	else if (p == 'X')
		i += ft_puthex_upper(va_arg(va, unsigned int));
	else
		i += ft_putchar(p);
	return (i);
}

int	ft_printf(const char *p, ...)
{
	va_list	va;
	int		i;

	i = 0;
	va_start(va, p);
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			i += ft_forma(va, *p, i);
		}
		else
			i += ft_putchar(*p);
		p++;
	}
	va_end(va);
	return (i);
}
