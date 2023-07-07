#include "main.h"
/**
 * *_strncat - concatenates two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: none
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (i < n && src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
