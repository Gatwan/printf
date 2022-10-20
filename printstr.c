#include "main.h"
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
