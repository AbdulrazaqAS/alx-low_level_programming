#include "main.h"

/**
 * _islower  - Entry point
 *
 * @c: Check
 *
 * Return: 0 if true else 1.
 *
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
