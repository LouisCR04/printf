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
	
	while (format != NULL && format[i] != 0)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;

			if (format[i] == '%')
				count += _putchar(format[i]);
			if (head_spec(format[i]) != 1)
			{
				count += _putchar('%');
				 count += _putchar(format[i]);
			}
			if (head_spec(format[i]) == 1)
			{
				count += print_all(format[i], args);
			}
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}
       return (count);	
}

int head_spec(char format)
{
	char f_specifier[] = {'%','c', 's', 'd'};
 	int i;
	
	for (i = 0;f_specifier[i]; i++)
	{
		if (f_specifier[i] == format)
			return (1);
	}
	return (0);
}

int print_all(char format, va_list args)
{
	int i = 0;
	int count = 0;

	spec specifiers[] = {
		{"c", charprint},
		{"s", stringprint},
		{"d", decimalprint},
		{NULL, NULL}
	};

	while (specifiers[i].spec != NULL)
	{
		if (*specifiers[i].spec == format)
		{
			count += specifiers[i].f(args);
		}
		i++;
	}
	return (count);
}
