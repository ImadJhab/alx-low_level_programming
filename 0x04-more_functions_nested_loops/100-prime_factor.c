#include <stdio.h>
/**
 * main - find and prints the largest prime
 * factor of the number 612852475143
 * Return: always 0
 */
int main(void)
{
	long num = 612852475143;
	long div = 2;

	while (num > div)
	{
		if (num % div ==0)
		{
			num /= div;
			div = 2;
		}
		else
		{
			div++;
		}
	}
	printf("%lu\n", num);
	return (0);
}
