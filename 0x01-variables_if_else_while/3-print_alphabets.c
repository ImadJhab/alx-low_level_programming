#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints the alphabet in lowercase, uppercase'
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabet_low = 'a';
	char alphabet_up = 'A';

	while (alphabet_low <= 'z')
	{
		putchar(alphabet_low);
		alphabet_low++;
	}

	while (alphabet_up <= 'Z')
	{
		putchar(alphabet_up);
		alphabet_up++;
	}
	putchar('\n');
	return (0);
}
