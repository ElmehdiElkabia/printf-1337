#include "ft_printf.h"

int main()
{
	printf("[%d]\n", ft_printf("%re"));
	printf("[%d]\n", printf("%re"));
}