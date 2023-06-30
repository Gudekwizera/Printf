#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* print_bin - this function convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	unsigned int len, toten, i, digit, n, num;
	int count = 0;

	n = va_arg(b, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		toten = 1;
		for (i = 1; i <= len - 1; i++)
			toten *= 2;
		for (i = 1; i <= len; i++)
		{
			digit = n / toten;
			_putchar(digit + '0');
			count++;
			n -= digit * toten;
			toten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
