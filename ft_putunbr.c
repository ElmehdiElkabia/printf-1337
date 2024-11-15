/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:56:58 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 16:57:22 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
		i += ft_putunbr(n / 10);
	i += ft_putchar(n % 10 + '0');
	return (i);
}
