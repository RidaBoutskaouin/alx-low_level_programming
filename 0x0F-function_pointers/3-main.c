#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * @argc: number of arguments passed.
 * @argv: array of those arguments.
 * Return: always 0
 */


int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	res = op_func(num1, num2);
	printf("%d\n", res);

	return (0);

}
