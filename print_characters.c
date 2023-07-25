#include "main.h"
#include <stdlib.h>


/**
 *_print_characters - main print fx caller
 *@format: specifier to check the argument list
 *@args: Arguments passed from _printf()
 *
 *Return: count of xters printed
 */
int _print_characters(const char *format, va_list args)
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

/**
 *head_spec - Checks if letter after % sign is a specifier
 *
 *@format: letter after % sign
 *Return: 1 if specifier else 0
 */
int head_spec(char format)
{
	char f_specifier[] = {'%', 'c', 's', 'd', 'i'};
	int i;

	for (i = 0; f_specifier[i]; i++)
	{
		if (f_specifier[i] == format)
			return (1);
	}
	return (0);
}

/**
 *print_all - Calls a fx in correspondence to the specifier
 *@format: letter after % sign
 *@args: Arguments to print
 *
 *Return: no. of letters printed
 */
int print_all(char format, va_list args)
{
	int i = 0;
	int count = 0;

	spec specifiers[] = {
		{"c", charprint},
		{"s", stringprint},
		{"d", decimalprint},
		{"i", decimalprint},
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
