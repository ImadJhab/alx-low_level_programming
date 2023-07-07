#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: variable
 * @argv: array
 * Return: 1 if error, 0 second condition
 */
int main(int argc, char *argv[])
{
	int sum;
	int i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
