/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:55:38 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/21 13:42:16 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n == 0)
	{
		i += ft_putchar('0');
		return (i);
	}
	if (n >= 16)
		i += ft_puthex(n / 16);
	i += ft_putchar(hex[n % 16]);
	return (i);
}
