#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints the alphabet in lowercase, uppercase'
 * Return: always 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}
	char ALPHABET = 'A';

	while (ALPHABET <= 'Z')
	{
		putchar(ALPHABET);
		ALPHABET++;
	}
	putchar('\n');
	return (0);
}
