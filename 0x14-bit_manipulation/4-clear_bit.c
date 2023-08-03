#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer
 * @index: index of the bit
 * Return: -1 in the first condition, 1 in the second
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	insigned int i;

	if (index > 63)
	{
		return (-1);
	}

	i = 1 << index;

	if (*n & i)
	{
		*n ^= i;
	}
	return (1);
}
