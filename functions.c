#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
*printchar - function that prints a character
*@valist: loop through the list of arguments
*Return: char length as int
*/
int printchar(va_list valist)
{
	int printc = 0;

	printc = va_arg(valist, int);
	_putchar(printc);
	return  (1);
}

/**
*printstr - function that prints a string
*@valist: loop through the list of arguments
*Return: length of string as int
*/
int printstr(va_list valist)
{
	char *c = va_arg(valist, char *);

	if (c == NULL)
	{
		_puts("(null)");
		return (6);
	}
}
