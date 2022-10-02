#include <stdio.h>

/**
 * main - Entry point
 * @argc: args count
 * @argv: argv array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc > 2)
	{
		sum += argv[1];
		sum += argv[2];
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
