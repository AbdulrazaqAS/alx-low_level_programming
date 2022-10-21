#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: args vector
 *
 * Return: int
 */
int main(int argc, char argv[])
{
	int result = 0;

	if (argc < 4 || argc > 4)
	{
		printf("Error");
		exit(98);
	}
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/' || argv[2] != '%')
	{
		printf("Error");
		exit(99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error");
		exit(100);
	}

	result = (get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", result);
}
