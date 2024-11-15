/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 13:55:20 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 13:55:30 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putptr(void *p)
{
	int	i;

	i = 0;
	i += ft_putstr("0x");
	i += ft_puthex((unsigned long long)p);
	return (i);
}