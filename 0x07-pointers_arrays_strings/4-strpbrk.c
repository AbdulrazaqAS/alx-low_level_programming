#include "main.h"

/**
 * _strpbrk - searches a str for any of a set of bytes
 * @s: string
 * @accept: bytes in string accept
 *
 * Return: pounter to bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b = 0;

	for (a = 0; s[a]; a++)
	{
		b = 0;
		while (*(accept + b))
		{
			if (s[a] == *(accept + b))
				return (s + a);
			b++;
		}
	}
	return ('\0');
}
