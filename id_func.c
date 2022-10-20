#include "main.h"
/**
*id_func - gets output according to format
*
*@format: string to be printed
*
*Return: number of charaters printed else 0
*/
int (*id_func(const char format))(va_list)
{
	 specifier(my_list[]) = {
                {"c", printchar}, {"s", printstr}, {"i", printdoIt},
                {"d", printdoIt}, {'\0', NULL}
                };
	

	int c;

	for (c = 0; my_list[c].fs != '\0'; c++)
	{
		if (*my_list[c].fs == format)
		{
			return (my_list[c].func);
		}
	}
	return (0);
}
