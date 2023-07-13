#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * *_calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size of array
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0)
	{
		return (0);
	}
	if (size == 0)
	{
		return (0);
	}

	ptr = malloc(size * nmemb);

	if (ptr == 0)
	{
		return (0);
	}

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
/**
 * _memset - fills memory with a constant byte
 * @s: pointer of the memory area
 * @n: number of bytes
 * @b: constant byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
