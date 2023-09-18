#include "main.h"
/**
 * _islower - checks for lower case characters
 * @c: character
 * Return: 1 if lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
