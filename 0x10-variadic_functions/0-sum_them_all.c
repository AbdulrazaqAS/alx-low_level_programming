#include "variadic_functions.h"

/**
 * sum_them_all - sum all varargs
 *
 * @n: fisrt arg
 *
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list vl;
	unsigned int total = 0, index;

	if (n == 0)
		return (0);
	va_start(vl, n);
	for (index = 0; index < n; index++)
	{
		total += va_arg(vl, int);
	}
	va_end(vl);
	return (total);
}
