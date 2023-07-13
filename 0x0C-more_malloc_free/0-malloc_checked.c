#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * malloc_checked - Allocates memory using malloc.
 *
 * @b: The number of bytes to allocate.
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the program terminates with a status value of 98.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr; 
	
	ptr = malloc(b);
	if (ptr == NULL)
	exit(98);

	return (ptr);
}
