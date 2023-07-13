#include "main.h"
#include <stlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of the memory block to be allocated
 * Return: a pointer to the allocated memory block.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}
	return (ptr);
}
