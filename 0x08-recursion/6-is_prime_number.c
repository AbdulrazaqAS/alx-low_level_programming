#include "main.h"

/**
 * check_if_prime - checks if num is prime
 * @num: num
 * @div: divisor
 * Return: 0 if yes, else 1
 */
int check_if_prime(int num, int div)
{
	if (div == num / 2)
		return (1);
	if (num % div == 0 && div != num && div != 1)
		return (0);
	return (check_if_prime(num, div + 1));
}

/**
 * is_prime_number - checks if a num is a prime num
 * @n: num
 * Return: if yes 1, else 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_if_prime(n, 1));
}
