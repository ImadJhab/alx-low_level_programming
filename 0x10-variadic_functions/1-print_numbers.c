#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers fillowed by a new line
 * @separator: string to be printed to separat numbers
 * @n: numbers passed
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}

