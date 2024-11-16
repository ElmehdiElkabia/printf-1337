/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:57:18 by eelkabia          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/11/16 20:15:55 by eelkabia         ###   ########.fr       */
=======
/*   Updated: 2024/11/15 16:56:04 by eelkabia         ###   ########.fr       */
>>>>>>> origin/master
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upper(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
	{
		i += ft_putchar('0');
		return (i);
	}
	if (n >= 16)
		i += ft_puthex_upper(n / 16);
	if (n % 16 < 10)
		i += ft_putchar(n % 16 + '0');
	else
		i += ft_putchar(n % 16 - 10 + 'A');
	return (i);
}
