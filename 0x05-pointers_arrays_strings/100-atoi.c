#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: pointer to string
 * Return: integer value of string, 0 if no numbers in the string
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s)
	{
		if (*s == '-')
			sign = -sign;
		else if (*s >= '0' && *s <= '9')
			result = result * 10 + (*s - '0');
		else if (result > 0)
			break;
			s++;
	}
	return (sign * result);
}
