#include "3-calc.h"

/**
 * main - Entry point
 * @argc: arg count
 * @argv: args vector
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];

	if (op[0] != '+' || op[0] != '-' || op[0] != '*' || op[0] != '/' || op[0] != '%' || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = get_op_func(op)(num1, num2);

	printf("%d\n", result);

	return(0);
}
