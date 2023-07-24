#include "main.h"
#include <stdlib.h>

/**
 *_print_characters - prints a format
 *@format : the format to print
 *return : counts of the format
 */

int _print_characters (const char *format, va_list args)
{
	int count = 0;

		count = print_all(format[i], args);
		return (count);
}

int print_all(format, va_list args)
{
	int i = 0;
	int count = 0;

	spec specifiers[] = {
		{"c", charprint},
		{"s", stringprint},
	};

	while (specifiers[i].spec)
	{
		if (specifiers[i].spec == format)
		{
			count = specifiers[i].f(args);
		}
		i++;
	}
	return (count);
}
