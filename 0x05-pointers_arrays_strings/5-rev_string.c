#include "main.h"

/**
 * rev_string - reverse
 * @s: str to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;

	while (s[index++])
		len++;
	
	char temp[] = s;

	for (len--; len >= 0; len--)
	{
		*(s + len) = temp[index++];
	}
}
