#include "main.h"
/**
 * swap_int - swaps the values of 2 integers
 * @a: integer 1
 * @b: integer 2
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	temp = *b;
}
