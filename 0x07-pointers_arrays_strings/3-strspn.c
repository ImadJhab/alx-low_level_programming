/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: string
 * Return: numnber of bytes in the inital segment of s
 * from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int f = 0;
	char *a;

	while (*s && !f)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				count++;
				f = 1;
				break;
			}
			a++;
		}
		if (!f)
		{
			return (count);
		}
		s++;
		f = 0;
	}
	return (count);
}
