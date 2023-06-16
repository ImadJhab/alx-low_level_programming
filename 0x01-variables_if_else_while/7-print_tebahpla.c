#include <stdio.h>
/**
 * main - Entry point
 * Description: 'printing the alphabet in reverse'
 * Return: always 0 (success)
 */
int main(void)
{
	char rev = 'z';

	while (rev >= 'a')
	{
		putchar(rev);
		rev--;
	}
	putchar('\n');
	return (0);
}
