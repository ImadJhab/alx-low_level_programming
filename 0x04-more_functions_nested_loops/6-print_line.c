#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: character to be printed
 * Return: none
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
