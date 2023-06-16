#include <stdio.h>
/**
 * main - Entry point
 * Description: 'print all single digits from 0 to 9'
 * Return: always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}
