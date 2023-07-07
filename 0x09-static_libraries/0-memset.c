#include "main.h"
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
