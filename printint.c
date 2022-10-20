#include "main.h"

/**
*printdoIt - Function to print double or integers
*
*@valist: loop through the list of arguments
*Return: number of double or integer
*/
int printdoIt(va_list valist)
{
	long int b = 0;
	long int c = 1;
	long int num = 0;
	int len = 0;

	num = va_arg(valist, int);
	if (num < 0)
	{
		_putchar('-');
		num = num * (-1);
		len = 1;
	}
	while (c <= num)
	{
		c = c * 10;
	}
	c = c / 10;
	b = num;
	while (c > 0)
	{
		b = num / c;
		_putchar((b % 10) + '0');
		c = c / 10;
		len = len + 1;
	}
	if (num == 0)
	{
		_putchar(0 + 48);
		len = len + 1;
	}
	return (len);
}
