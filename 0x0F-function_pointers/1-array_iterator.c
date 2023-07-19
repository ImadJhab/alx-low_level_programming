#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to be executed
 * Retrun: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
