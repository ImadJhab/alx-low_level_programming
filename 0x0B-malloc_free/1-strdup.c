#include <stdlib.h>
#include "main.h"
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *  which contains a copy of the string given as a parameter
 * @str: string given
 * Return: 0 in first condition, pointer in the second one,
 * 0 int the third
*/
char *_strdup(char *str)
{
	int len;
	char *sec;

	if (str == 0)
	{
		return (0);
	}

	len = _strlen(str);
	sec = (char *) malloc((len + 1) * sizeof(char));

	if (sec == 0)
	{
		return (0);
	}
	_strcpy(sec, str);
	return (sec);
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
