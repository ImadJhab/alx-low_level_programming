#include "variadic_functions.h"
/**
 * sum_them_all - Calculates the sum of a variable number of integers
 * @n: The number of arguments passed to the function
 * If n is 0, the function returns 0
 * @...: A variable number of integers to be summed up
 * Return: The sum of all the integers passed as arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;
	int num;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		sum += num;
	}
	va_end(args);

	return (sum);
}
