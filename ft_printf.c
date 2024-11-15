/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelkabia <eelkabia@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:22:06 by eelkabia          #+#    #+#             */
/*   Updated: 2024/11/15 14:04:31 by eelkabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_forma(va_list va, char p, int i)
{
	if (p == 'c')
		i += ft_putchar(va_arg(va, int));
	else if (p == 's')
		i += ft_putstr(va_arg(va, char *));
	else if (p == 'p')
		i += ft_putptr(va_arg(va, void *));
	else if (p == 'd')
		i += ft_putnbr(va_arg(va, int));
	else if (p == 'i')
		i += ft_putnbr(va_arg(va, int));
	else if (p == 'u')
		i += ft_putunbr(va_arg(va, unsigned int));
	else if (p == 'x')
		i += ft_puthex(va_arg(va, unsigned int));
	else if (p == 'X')
		i += ft_puthex_upper(va_arg(va, unsigned int));
	else
		i += ft_putchar(p);
	return (i);
}

int	ft_printf(const char *p, ...)
{
	va_list	va;
	int	i;

	i = 0;
	va_start(va, p);
	while (*p)
	{
		if (*p == '%')
		{
			p++;
			i += ft_forma(va, *p, i);
		}
		else
			i += ft_putchar(*p);
		p++;
	}
	va_end(va);
	return (i);
}
int main(void)
{
	ft_printf("Character: %c\n", 'A');
	printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "Hello, world!");
	printf("String: %s\n", "Hello, world!");
	ft_printf("Pointer: %p\n", (void *)0x7ffee3bff618);
	printf("Pointer: %p\n", (void *)0x7ffee3bff618);
	ft_printf("Decimal: %d\n", 123);
	printf("Decimal: %d\n", 123);
	ft_printf("Integer: %i\n", 456);
	printf("Integer: %i\n", 456);
	ft_printf("Unsigned: %u\n", 789);
	printf("Unsigned: %u\n", 789);
	ft_printf("Hexadecimal (lowercase): %x\n", 0xabc);
	printf("Hexadecimal (lowercase): %x\n", 0xabc);
	ft_printf("Hexadecimal (uppercase): %X\n", 0xABC);
	printf("Hexadecimal (uppercase): %X\n", 0xABC);
	return 0;
}