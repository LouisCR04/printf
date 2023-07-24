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
	int count = 0;

	va_start (args, format);
	count = _print_characters (format, args);

	va_end (args);
	return (count);
}
