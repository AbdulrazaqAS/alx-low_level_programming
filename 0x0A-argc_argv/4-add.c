#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: args count
 * @argv: argv array
 * Return: 0 or 1 status
 */
int main(int argc, char *argv[])
{
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				if (atoi(argv[i]) > 0)
					sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
