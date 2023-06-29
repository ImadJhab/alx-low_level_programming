#include "main.h"
/**
 * _strcmp - compares two strings.
 * @s1: pointer of the first string
 * @s2: pointer of the second string
 * Return: integer.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
