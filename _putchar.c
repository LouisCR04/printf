#include <unistd.h> 

/**
 *_putchar - Entry point
 *This is the 1st source file that the gcc
 *is compiling and will be linked to the 0-putchar.c file
 *Just outputs a single character to the console
 *@c: any single character
 *
 * Return:A single character
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
