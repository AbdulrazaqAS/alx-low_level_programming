#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * str_concat - concats 2 str
 * @s1: str1
 * @s2: str2
 *
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, total = 0, index;
	char *new;

	if(s1 != null)
		while (s1[len1])
			len1++;
	if(s2 != null)
		while (s2[len2])
			len2++;
	total = s1 + s2;
	new = malloc(sizeof(char) * total);
	if (new == null)
		return (NULL);
	for (index = 0; index < len1; index++)
		new[index] = s1[index];
	len1 = 0;
	for (; index < total; index++)
		new[index] = s2[len1++];
	return (new);
}
