#include "main.h"
#include <stdlib.h>

/**
 *_printf - Prints
 *@format: A pointer to a const char that specifies format
 *
 * Return: Number of characters printed
 *This is group work
*/

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	va_start (args, format);
	length = _print_characters ();

	va_end (args);
	return (length);
}
