#include "main.h"
#include <stdlib.h>

/**
 *charprint - Prints a character
 *@args: Arg passed to be printet to std output
 *
 * Return: always 1
 */
int charprint(va_list args)
{
	_putchar(va_arg(args, int));

	return (1);
}

int stringprint(va_list args)
{
	int n = 0;
	char *arg = va_arg(args, char *);

	if (arg != NULL)
	{
		while (arg[n])
		{
			_putchar(arg[n]);
			n++;
		}
	}

	return (n);
}

int decimalprint(va_list args)
{
	int n;

	n = va_arg(args, int);
	n = 0;

	return (n);
}
