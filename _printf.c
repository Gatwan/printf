#include "main.h"

/**
*_printf - function that produces output according to a format
*
*@format:  character string
*
*Return: number of characters printed
*/
int _printf(const char *format, ...)
{
	unsigned int i = 0, j, count;
	char * str;
	const char t_arg[] = "cs";

	va_list ap;

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && count)
			{
				printf(", ");
				break;
			} 
		j++;
		}
		switch(format[i])
		{
			case 'c';
			printf
		}
	}
}
