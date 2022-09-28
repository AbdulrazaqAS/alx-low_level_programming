#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: parent string
 * @needle: str to be found
 *
 * Return: pointer to beginning of needle
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b = 0, c;

	for (a = 0; haystack[a]; a++)
	{
		if (haystack[a] == needle[0])
		{
			for (c = 0; needle[c]; c++)
			{
				if (needle[c] != haystack[a + c])
					break;
				else
					continue;
				if (!needle[c])
					return (haystack + a);
			}
		}
	}
	return ('\0');
}
