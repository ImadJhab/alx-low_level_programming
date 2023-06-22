#include "main.h"
/**
 * print_triangle - prints a triangle in the terminal
 * @size: size of char
 * Return: none
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(35);
			}	
		}
		_putchar('\n');
	}
}
