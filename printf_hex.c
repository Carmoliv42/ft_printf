#include "ft_printf.h"

int	printf_hex(unsigned int num, int up_lw)
{
	int		count;
	char	*base;

	count = 0;
	if (up_lw)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num >= 16)
		count += printf_hex(num / 16, up_lw);
	count += printf_putchar(base[num % 16]);
	return (count);
}