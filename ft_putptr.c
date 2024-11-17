/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:55:20 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/17 09:33:59 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put(unsigned long n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		i += ft_putstr("0x0");
		return (i);
	}
	if (n >= 16)
		i += ft_put(n / 16);
	i += ft_putchar(hex[n % 16]);
	return (i);
}

int	ft_putptr(void *p)
{
	int	i;

	i = 0;
	if (!p)
		i += ft_putstr("0x0");
	else
	{
		i += ft_putstr("0x");
		i += ft_put((unsigned long)p);
	}
	return (i);
}


