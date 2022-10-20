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
