#include "main.h"

/**
*printchar - function that prints a character
*@valist: loop through the list of arguments
*Return: char length as int
*/
int printchar(va_list valist)
{
	char output = va_arg(valist, int);

	write(1, &output, 1);
	return (1);
}

/**
*printstr - function that prints a string
*@valist: loop through the list of arguments
*Return: length of string as int
*/
int printstr(va_list valist)
{
	char *str;
	int len;

	str = va_arg(valist, char *);
	if (str)
	{
		for (len = 0; *(str + len) != '\0'; len++)
			;
		write(1, str, len);
		return (len);
	}
	write(1, "(null)", 6);
	return (6);
}

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




