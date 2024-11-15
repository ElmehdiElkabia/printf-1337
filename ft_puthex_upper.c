/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:18 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 13:57:25 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex_upper(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex_upper(n / 16);
	if (n % 16 < 10)
		i += ft_putchar(n % 16 + '0');
	else
		i += ft_putchar(n % 16 - 10 + 'A');
	return (i);
}