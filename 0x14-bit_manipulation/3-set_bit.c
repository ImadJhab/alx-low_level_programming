#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer
 * @index: index of the bit
 * Return: -1 in the first condition, 1 in the second
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int L;

	if (index > 63)
	{
		return (-1);
	}

	L = 1 << index;
	*n = (*n | L);

	return (1);
}
