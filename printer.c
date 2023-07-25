#include "main.h"
#include <stdlib.h>
#include <limits.h>

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
	int m = va_arg(args, int);
	int i = 0;
	int count = 0;
	int cnt[11];

	if (m == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return (11);
	}

	if (m < 0)
	{
		_putchar('-');
		count++;
		m = -m;
	}
	if (m == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (m != 0)
		{
			cnt[i] = m % 10;
			m = m / 10;
			i++;
		}
		i--;
		while (i >= 0)
		{
			_putchar('0' + cnt[i]);
			count++;
			i--;
		}
	}
	return (count);
}
