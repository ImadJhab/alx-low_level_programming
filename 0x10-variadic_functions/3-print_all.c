#include <stdio.h>
#include "variadic_functions.h"
int _strlen(const char *s);
/**
 * print_all - function that prints anything
 * @format:  list of types of args
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int b = 0;
	char *s;

	va_start(args, format);

	while (format && format[b])
	{
		switch (format[b])
		{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			s = (va_arg(args, char *));
			if (s == NULL)
				s = "(nil)";

			printf("%s", s);
			break;
		default:
			b++;
			continue;
		}
		if (b != _strlen(format) - 1)
			printf(", ");
		b++;
	}
	printf("\n");
	va_end(args);
}
/**
 *  _strlen -  calculates the length of a string
 * @s: pointer to a string
 * Return: length
 */

int _strlen(const char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
