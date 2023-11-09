#include "variadic_functions.h"

/**
 * print_all - print anything
 * @format: arguments types
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
