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
	int i = 0;
	char f_specifier[] = {'c','s'};
	
	while (format != NULL && format[i] != 0)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;

			if (format[i] == '%')
				count += _putchar(format[i]);
			if (f_specifier[i] == format[i])
			{
				count += print_all(format[i], args);
			}
			else 
			{
				count += _putchar('%');
				count += _putchar(format[i]);
			}
		}
		count = _putchar(format[i]);
		i++;
	}
       return (count);	
}

int print_all(char format, va_list args)
{
	int i = 0;
	int count = 0;

	spec specifiers[] = {
		{"c", charprint},
		{"s", stringprint},
		{NULL, NULL}
	};

	while (specifiers[i].spec != NULL)
	{
		if (*specifiers[i].spec == format)
		{
			count = specifiers[i].f(args);
		}
		i++;
	}
	return (count);
}
