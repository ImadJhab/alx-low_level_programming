#include "main.h"
/**
 * binary_to_uint - converts binaru to unsigned int
 * @b: binary to be converted
 * Return: results
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;
	char curr;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		curr = b[i];

		if (curr != 48 && curr != 49)
		{
			return (0);
		}
		res = res * 2 + (curr - 48);
		i++;
	}
	return (res);
}
