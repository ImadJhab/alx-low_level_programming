/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to be located
 * Return: the character in the string, NULL if the
 * character not found
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
