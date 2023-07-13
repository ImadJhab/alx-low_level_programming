#include "main.h"
#include <stdlib.h>
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block
 * Return: Pointer to the newly allocated memory block
 * NULL if new_size is zero and ptr is not NULL
 * NULL if memory reallocation fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int cpysize;

	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
	{
		return (malloc(new_size));
	}
	if (old_size == new_size)
	{
		return (ptr);
	}

	newptr = malloc(new_size);

	if (newptr == 0)
	{
		return (0);
	}

	cpysize = old_size;

	if (old_size > new_size)
	{
		cpysize = new_size;
	}

	_memcpy(newptr, ptr, cpysize);
	free(ptr);

	return (newptr);
}
/**
 * _memcpy - copies memory area
 * @dest: memory area to copy to
 * @src: memory area
 * @n: number of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
