#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 *_putchar - Entry point
 *This is the 1st source file that the gcc
 *is compiling and will be linked to the 0-putchar.c file
 *Just outputs a single character to the console
 *@c: any single character
 *
 * Return:A single character
 */
int _putchar(char c);

int _printf(const char *format, ...);

int _print_characters (const char *format, va_list args);

int charprint(va_list args);

int stringprint(va_list args);

int print_all(char format, va_list args);

typedef struct specs 
{
	char *spec;
	int (*f)(va_list args);
}spec;

#endif
