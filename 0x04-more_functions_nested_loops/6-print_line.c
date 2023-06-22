#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: character to be printed
 * Return: none
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
