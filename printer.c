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
	int i = 0;
	char *arg = va_arg(args, char *);

	if (arg != NULL)
	{
		while (arg[i])
		{
			_putchar(arg[i]);
			i++;
		}
	}

	return (i);
}