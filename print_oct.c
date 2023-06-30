#include "main.h"

/**
* print_octal - unsigned  to octal
* @o: unsigned
* Return: octNum
*/
int print_octal(va_list o)
{
	unsigned int len, toten, i, digit, n, num;
	int count = 0;

	n = va_arg(o, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 8;
			len++;
		}
		toten = 1;
		for (i = 1; i <= len - 1; i++)
			toten *= 8;
		for (i = 1; i <= len; i++)
		{
			digit = n / toten;
			_putchar(digit + '0');
			count++;
			n -= digit * toten;
			toten /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
