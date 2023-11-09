#include "variadic_functions.h"

/**
 * print_numbers - print nums
 * @separator: str to be printed btw nums
 * @n: num of ints passed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list vl;

	va_start(vl, n);
	for (index = 0; index < n; index++)
	{
		if (separator == NULL || index == n - 1)
			printf("%d", va_arg(vl, int));
		else
			printf("%d%s", va_arg(vl, int), separator);
	}
	printf("\n");
}
