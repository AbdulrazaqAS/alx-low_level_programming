#include "main.h"

/**
 * rev_string - reverse
 * @s: str to reverse
 */
void rev_string(char *s)
{
	int len = 0;
	int index = 0;
	char temp;

	while (s[index++])
		len++;
	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index]; /* Last element */
		s[index] = s[len - 1 - index]; /* Last = first */
		s[len - index - 1] = temp; /* First = tmp */
	}
}
