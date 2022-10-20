#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
*_printf - function that produces output according to a format
*
*@format:  character string
*
*Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	va_list valist;
	int b = 0, c = 0, d = 0, e = 0, cuenf = 0, len = 0;

	specifier my_list[] = {
		{"c", printchar}, {"s", printstr}, {"i", printdoIt},
		{"d", printdoIt}
	};

	va_start(valist, format);
	if (format == NULL)
	{
	return (-1);
	}
	while (format[b] != '\0')
	{
		c = 0;
		if (format[b] == '%')
		{
			for (d = 0; d < 8; d++)
			{
				if (format[b + 1] == '\0')
					{
					return (-1);
					}
				if (format[b + 1] == *(my_list[d].fs))
				{
					cuenf = cuenf + my_list[d].func(valist);
					c = 2;
					e = e + 2;
					b = b + 1;
					break;
				}
			}
		}
		if (c == 0)
			_putchar(format[b]);
		b = b + 1;
	}
	len = b + cuenf - e;
	va_end(valist);
	return (len);
}
