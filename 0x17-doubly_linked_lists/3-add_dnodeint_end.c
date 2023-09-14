#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: head of the list
 * @n: node of the lsit
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *strt;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->next = NULL;
		new_node->n = n;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	strt = *head;
	while (strt->next)
	{
		strt = strt->next;
	}
	strt->next = new_node;
	new_node->prev = strt;
	new_node->next = NULL;
	new_node->n = n;
	return (new_node);
}
