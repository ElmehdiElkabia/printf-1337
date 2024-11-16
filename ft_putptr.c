/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:55:20 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/16 21:08:06 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(void *p)
{
	int i;

	i = 0;
	if (!p)
		i += ft_putstr("0x0");
	else
	{
		i += ft_putstr("0x");
		i += ft_puthex((unsigned long)p);
	}
	return (i);
}
