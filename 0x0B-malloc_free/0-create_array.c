#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size to print
 * @c: specific char
 * Return: NULL if size = 0, pointer to the array or NULL
 * if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
