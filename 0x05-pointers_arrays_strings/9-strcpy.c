#include "main.h"
/**
 * _strcpy - copies the string pointed to
 * @src: string pointed to
 * @dest: new string
 * Return: none
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
