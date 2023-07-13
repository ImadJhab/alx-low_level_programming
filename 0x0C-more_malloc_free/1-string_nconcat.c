#include "main.h"
#include <stdlib.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
/**
 * string_nconcat - Concatenates two strings with a limit on the second string
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated (limited by n)
 * @n: Maximum number of bytes from s2 to be concatenated
 * Return: ptr to the allocated string, null if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int conlen = 0;
	char *constr;

	if (s1 == 0)
	{
		s1 = "";
	}
	if (s2 == 0)
	{
		s2 = "";
	}

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
	{
		conlen = len1 + len2;
	}
	else
	{
		conlen = len1 + n;
	}
	constr = malloc(sizeof(char) * (conlen + 1));

	if (constr == 0)
	{
		return (0);
	}
	_strcpy(constr, s1);
	_strncat(constr, s2, n);
	return (constr);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer of a string
 * Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
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
