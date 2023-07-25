#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 *_putchar - Prints a character to the std output
 *@c: any single character
 *
 * Return: 1 if succesfull
 */
int _putchar(char c);

int _printf(const char *format, ...);

int _print_characters(const char *format, va_list args);

int head_spec(char format);

int charprint(va_list args);

int stringprint(va_list args);

int decimalprint(va_list args);

int print_all(char format, va_list args);

/**
 *struct specs - Defines format specifiers
 *@spec: format specifiers
 *@f: function in accordance to specifier
 */
typedef struct specs
{
	char *spec;
	int (*f)(va_list args);
} spec;

#endif
