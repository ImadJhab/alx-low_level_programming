#include "main.h"
/**
 * _isalpha - checking for alphabetric characters
 * @c: a character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
