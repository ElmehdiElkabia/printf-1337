/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:24:16 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/16 20:13:49 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *p, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putptr(void *p);
int	ft_putnbr(int n);
int	ft_puthex(unsigned int n);
int	ft_puthex_upper(unsigned int n);
int	ft_putunbr(unsigned int n);

<<<<<<< HEAD
=======
int	ft_printf(const char *p, ...);
int	ft_putchar(int c);
int	ft_puthex_upper(unsigned int n);
int	ft_puthex(unsigned int n);
int	ft_putnbr(int n);
int	ft_putptr(void *p);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);

>>>>>>> origin/master
#endif