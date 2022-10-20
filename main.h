#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
*struct formspec - structure for specifier and corresponding functions
*@fs: data type format
*@func: function parameter
*/
typedef struct formspec
{
	char *fs;
	int (*func)(va_list);
} specifier;

int _putchar(char c);
int _puts(char *str);
int (*id_func(const char format))(va_list);
int _printf(const char *format, ...);
int printchar(va_list valist);
int printstr(va_list valist);
int printdoIt(va_list valist);

#endif
