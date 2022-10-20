#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int (*id_func(const char format))(va_list);

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

int _puts(char *str);
int printchar(va_list valist);
int printstr(va_list valist);
int printdoIt(va_list valist);

#endif
