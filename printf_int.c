#include "libftprintf.h"

int	printf_int (int num)
{
	long	x;
	long	result;

	result = 0;
	x = num;
	if (num < 0)
	{
		result += printf_putchar('-');
		x = -x;
	}
	if (num > 9)
		result += printf_int(num / 10);
	result += printf_putchar((num % 10) + '0');
	return (result);
}