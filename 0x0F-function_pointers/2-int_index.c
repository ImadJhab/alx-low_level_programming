#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the integer
 * @size: number of elements
 * @cmp: pointer to the function to be used
 * Return: -1, i, -1 if no element matches
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array && cmp)
	{
		if (size <= 0)
		{
			return (-1);
		}
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
