#include <stdio.h>
#include <stdlib.h>
/**
* main - checks how much coins we need to give change
* @argv: array
* @argc: length of argv
* Return: 1 in the first condition, 0 in the second
*/
int main(int argc, char *argv[])
{
	int coins[] = { 25, 10, 5, 2, 1 };
	int num = 0;
	int count = 0;
	int i;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);

	if (num < 0)
	{
		printf("0\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
	{
		count += num / coins[i];
		num   %= coins[i];
	}
	printf("%i\n", count);
	return (0);
}
