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
	specifier my_list[] = {
		{"c", printchar}, {"s", printstr}
	};

	va_start(valist, format);

	

	va_end(valist);

}
