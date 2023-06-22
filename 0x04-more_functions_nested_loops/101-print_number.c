#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer to be pritned
 * Return: none
 */
void print_number(int n)
{
	unsigned int t;
	unsigned int d;
	unsigned int p;
	double j;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			p = n * -1;
			_putchar('-');
		}

		while (j <= p)
			j *= 10;
		t = j / 10;

		while (t >= 1)
		{
			d = p / t;
			_putchar(d + '0');
			p = (p - (t * d));
			t /= 10;
		}
	}
}
