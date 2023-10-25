#include "main.h"

/**
 * _strlen - Returns strlen
 * @s: str
 * Return: strlen
 */
int _strlen(char *s)
{
	int len = 0;

	if (s[len])
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks
 * @s: str
 * @len: strlen
 * @index: index to check
 * Return: 1 if yes, else 0
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);
	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));
	return (0);
}
/**
 * is_palindrome - checks if a str is a palindrome
 * @s: str
 * Return: if yes 1, else 0
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (check_palindrome(s, _strlen(s), 0));
}
