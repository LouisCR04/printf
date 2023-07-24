#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _printf(const char *format, ...);

typedef struct specs 
{
	char *spec;
	int (*f)(va_list args);
}spec;

#endif
