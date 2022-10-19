#include "main.h"
/**
*_puts - print the string
*
*@str: string
*
*Return: string length
*/
int _puts(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 1;
	}
	return (len);
}
