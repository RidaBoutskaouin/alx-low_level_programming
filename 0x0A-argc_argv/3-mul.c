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
		printf("Error\n");

	printf("%d\n", argv[1] * argv[2]);

	return (0);
}
