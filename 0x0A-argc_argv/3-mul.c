#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: variable
 * @argv: array of strings
 * Return: 1 in the first condition, 0 in the second
*/
int main(int argc, char *argv[])
{
	int sum;
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	sum = num1 * num2;

	printf("%d\n", sum);
	return (0);
}
