#include "main.h"
/**
 * _puts - prints a string
 * @str: pointer of a string
 * Return: none
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
