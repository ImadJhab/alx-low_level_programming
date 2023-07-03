/**
 * _strpbrk - searches a string for any
 * of a set of bytes
 * @s: first string
 * @accept: second string
 * Return:pointer to s that matches in accept,
 * 0 if no byte found
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
