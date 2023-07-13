#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * from min to max (inclusive).
 * @min: The minimum value of the range.
 * @max: The maximum value of the range.
 * Return: Pointer to the newly created array.
 * NULL if min > max or if memory allocation fails.
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
	{
		return (0);
	}

	size = max - min + 1;
	array = (int *) malloc(size * sizeof(int));

	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min++;
	}
	return (array);
}
