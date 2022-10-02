#include <stdio.h>
#include <stdlib.h>

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
		sum += atoi(argv[1]);
		sum += atoi(argv[2]);
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
