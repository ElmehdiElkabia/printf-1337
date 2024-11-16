/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:22:06 by eelkabia          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/16 20:30:05 by eelkabia         ###   ########.fr       */
=======
/*   Updated: 2024/11/15 16:49:27 by eelkabia         ###   ########.fr       */
>>>>>>> origin/master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_forma(va_list va, char p, int *i)
{
	if (p == 'c')
		*i += ft_putchar(va_arg(va, int));
	else if (p == 's')
		*i += ft_putstr(va_arg(va, char *));
	else if (p == 'p')
		*i += ft_putptr(va_arg(va, void *));
	else if (p == 'd' || p == 'i')
		*i += ft_putnbr(va_arg(va, int));
	else if (p == 'u')
		*i += ft_putunbr(va_arg(va, unsigned int));
	else if (p == 'x')
		*i += ft_puthex(va_arg(va, unsigned int));
	else if (p == 'X')
		*i += ft_puthex_upper(va_arg(va, unsigned int));
	else if (p == '%')
		*i += ft_putchar('%');
	else
		*i += ft_putchar(p);
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
			ft_forma(va, *p, &i);
		}
		else
			i += ft_putchar(*p);
		p++;
	}
	va_end(va);
	return (i);
}
