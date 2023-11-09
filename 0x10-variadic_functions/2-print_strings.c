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
		str = va_arg(vl, char*);

		if (separator == NULL)
		{
			printf("%s", str);
		}
		else if (index == n - 1)
		{
			if (str == NULL)
				printf("(nil)");
			else
				printf("%s", str);
		}
		else
		{
			if (str == NULL)
				printf("%s%s", "nil", separator);
			else
				printf("%s%s", str, separator);
		}
	}
	printf("\n");
}
