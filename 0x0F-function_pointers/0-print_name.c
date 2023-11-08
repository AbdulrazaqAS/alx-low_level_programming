#ifndef PTR
#define PTR
#include "function_pointers.h"
#include <stddef.h>
#endif

/**
 * print_name - prints name
 * @name: name
 * @f: function
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
