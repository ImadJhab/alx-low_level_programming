#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of a list
 * @index: index of the node
 * Return: nth node, or NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int track;

	while (head != NULL)
	{
		if (track == index)
		{
			return (head);
		}
		head = head->next;
		track++;
	}
	return (NULL);
}
