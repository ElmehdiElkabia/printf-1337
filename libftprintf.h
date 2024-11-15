/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:24:16 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 14:04:48 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>

int	ft_printf(const char *, ...);
int	ft_putchar(int);
int	ft_putstr(char *);
int	ft_putptr(void *);
int	ft_putnbr(int);
int	ft_puthex(unsigned int);
int	ft_puthex_upper(unsigned int);
int	ft_putunbr(unsigned int);
#endif