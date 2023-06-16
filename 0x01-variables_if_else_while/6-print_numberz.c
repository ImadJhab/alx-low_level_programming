#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing single digits from 0 to 9 with putchar'
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
