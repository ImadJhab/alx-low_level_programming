#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: data of the new node
 * Return: pointer of the new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *curr;
	unsigned int check = 0;

	curr = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (curr != NULL && check < idx - 1)
	{
		curr = curr->next;
		check++;
	}
	if (curr == NULL)
	{
		return (NULL);
	}
	if (curr->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = curr;
	new_node->next = curr->next;
	curr->next->prev = new_node;
	curr->next = new_node;
	return (new_node);
}
