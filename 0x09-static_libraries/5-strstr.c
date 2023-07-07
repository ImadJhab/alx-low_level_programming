#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to the beginning of the located
 * substring, 0 if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack[i])
	{
		while (haystack[i + j] == needle[j])
		{
			j++;
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
