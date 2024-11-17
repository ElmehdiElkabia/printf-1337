/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:18 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/16 21:13:25 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
{
	int		i;
	char	*hex_upper;

	i = 0;
	hex_upper = "0123456789ABCDEF";
	if (n == 0)
	{
		i += ft_putchar('0');
		return (i);
	}
	if (n >= 16)
		i += ft_puthex_upper(n / 16);
	i += ft_putchar(hex_upper[n % 16]);
	return (i);
}
