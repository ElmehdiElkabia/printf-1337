/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:55:38 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 13:56:22 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_puthex(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 16)
		i += ft_puthex(n / 16);
	if (n % 16 < 10)
		i += ft_putchar(n % 16 + '0');
	else
		i += ft_putchar(n % 16 - 10 + 'a');
	return (i);
}