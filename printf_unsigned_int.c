#include "libftprintf.h"

int	printf_unsigned_int(unsigned int n)
{
    int	count;

	count = 0;
	if (n >= 10)
		count += printf_unsigned_int(n / 10);
	count += printf_unsigned_int((n % 10) + '0');
	return (count);
}