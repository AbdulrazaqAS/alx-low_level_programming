#include "main.h"

/**
 * _strnpn - get length of prefix substring
 * @s: string
 * @accept: prefix
 *
 * Return: num of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b = 0, c = 0;

	for (a = 0; s[a] != ' '; a++)
		while (accept[c])
		{
			if (accept[c] == s[a])
			{
				b++;
				break;
			}
			c++;
		}
	return (b);
}
