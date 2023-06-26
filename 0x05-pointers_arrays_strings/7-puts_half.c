#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: pointer of a string
 * Return: none
 */
void puts_half(char *str)
{
	int len = 0;
	int num;
	char *cur = str;

	while (*cur != '\0')
	{
		len++;
		cur++;
	}

	num = len / 2;
	cur = str + len - num;

	while (*cur != '\0')
	{
		_putchar(*cur);
		cur++;
	}
	_putchar('\n');
}
