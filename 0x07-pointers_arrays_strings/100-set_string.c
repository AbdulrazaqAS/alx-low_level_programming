#include "main.h"

/**
 * set_string - sets value of a pointer to a char
 * @s: pointer
 * @to: to
 */
void set_string(char **s, char *to)
{
	int a = 0;

	while (*s[a])
	{
		to[a] = **(s + a);
		a++;
	}
}
