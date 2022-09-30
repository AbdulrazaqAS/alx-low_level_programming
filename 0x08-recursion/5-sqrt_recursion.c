#include "main.h"

/**
 * find_sqrt - chech if a num has sqrt
 * @num: the number
 * @root: the root to be tested
 * Return: the sqrt or -1 if num has no sqrt
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);
	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - calc natural sqrt of a num
 * @n: num
 * Return: sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (find_sqrt(n, 0));
}
