#include <stdio.h>
/**
 * main - Entry point
 * Description: 'program that prints the alphabet in lowercase using putchar'
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
	putchar('\n');
	return (0);
}
