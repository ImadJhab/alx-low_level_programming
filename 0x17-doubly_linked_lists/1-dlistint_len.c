#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head of a doubly linked list
 * Return: length of the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	size_t counter;

	for (counter = 0; h; counter++)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
