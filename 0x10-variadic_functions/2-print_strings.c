#include "variadic_functions.h"

/**
 * print_strings - print strings
 * @separator: str to be printed btw strings
 * @n: num of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	va_list vl;
	char *str;

	va_start(vl, n);
	for (index = 0; index < n; index++)
	{
		if (separator == NULL || index == n - 1)
			printf("%d", va_arg(vl, int));
		else
		{
			str = va_arg(vl, char*);
			if (str == NULL)
				printf("%d%s", str, separator);
			else
				printf("%d%s", str, separator);
	}
	printf("\n");
}
