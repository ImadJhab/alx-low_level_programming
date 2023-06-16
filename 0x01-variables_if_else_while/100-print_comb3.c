#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing combinations of two digits'
 * Return: always 0 (success)
 */
int main(void)
{
	int i, c;

	for (i = 0; i < 10; i++)
	{
		for (c = i + 1; c < 10; c++)
		{
			putchar(i + 48);
			putchar(c + 48);
			if (i != 8 || c != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
