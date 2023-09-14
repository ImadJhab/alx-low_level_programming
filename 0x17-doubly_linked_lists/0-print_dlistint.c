#include "lists.h"
/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: head of the list
 * Return: nodes number
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *pt = h;
	size_t n = 0;

	while (pt && pt->prev)
	{
		pt = pt->prev;
	}
	while (pt)
	{
		printf("%d\n", pt->n);
		n++;
		pt = pt->next;
	}
	return (n);
}
