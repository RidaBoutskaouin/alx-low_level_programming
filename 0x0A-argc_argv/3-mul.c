#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array of those arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc - 1 != 2)
	{
		printf("Error\n");
		return (1);
	}


	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
