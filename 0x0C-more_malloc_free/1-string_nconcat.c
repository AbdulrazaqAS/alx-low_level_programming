#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * string_nconcat - concats 2 strings
 * @s1: str1
 * @s2: str2
 * @n: num of bytes from str2 for concat
 *
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total = 0, index, temp = 0;
	char *new;

	if (s1 != NULL)
		s1 = "";

	while (s1[len1])
			len1++;

	if (s2 != NULL)
		s2 = "";

	while (s2[len2])
			len2++;

	if (n >= len2)
		n = len2;

	total = len1 + n;

	new = malloc(sizeof(char) * (n + 1));
	if (new == NULL)
		return (NULL);
	for (index = 0; index < total; index++)
	{
		if (index < len1)
		{
			new[index] = s1[index];
		}
		else
		{
			new[index] = s2[temp++];
		}
	}
	new[total] = '\0';
	return (new);
}
