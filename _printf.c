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
	int b = 0, c, d = 0, e = 0, f = 0, lenfunc = 0, len = 0;
	va_list valist;
	specifier my_list[] = {
		{"c", printchar}, {"s", printstr}, {"i", printdoIt},
		{"d", printdoIt}
		};
	if (!format)
		return (-1);
	va_start(valist, format);

	for (b = 0; format[b] !=  '\0'; b++)
	{
		if (format[b] == '%')
		{
			if (format[b + 1] == '\0')
				return (-1);
			else if (format[b + 1] == '%')
			{
				_putchar('%');
				e++;
				b++;
			}
			else if (format[b + 1] != '\0')
			{

				for (c = 0; my_list[c].fs != '\0'; c++)
				{
					if (my_list[c].fs == char (format[b + 1]))
					{
						lenfunc = lenfunc + (int (my_list[c].func));
					}
				}
			}
			else
			{
				_putchar(format[b]);
				f++;
			}
		}
		else
		{
			_putchar(format[b]);
			d++;
		}
	}
	len = lenfunc + d + e + f;
	return (len);
}
