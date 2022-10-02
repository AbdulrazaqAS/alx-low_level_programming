#include <stdio.h>

/**
 * main - prints num of args passed to it
 * @argc: args count
 * @argv: args array
 *
 * Return: 0 always
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
