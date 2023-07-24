#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);

int _print_characters (const char *format, va_list args);

int charprint(va_list args);

int stringprint(va_list args);

int print_all(format, va_list args);

typedef struct specs 
{
	char *spec;
	int (*f)(va_list args);
}spec;

#endif
