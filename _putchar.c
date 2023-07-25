#include <unistd.h>

/**
 *_putchar - Prints a character to the std output
 *@c: any single character
 *
 * Return: 1 if succesfull
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
