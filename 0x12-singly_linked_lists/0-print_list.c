#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int len;
	char *str = 0;
	int c = 0;

	while (h)
	{
		len = h->len;
		str = h->str;

		if (str)
		{
			printf("[%d] %s\n", len, str);
		}
		h = h->next;
		c++;

		if (str == NULL)
		{
			printf("[0] (nil)\n");
		}

	}
	return (c);
}
