#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node
 * @head: head of the node
 * @index: index of the node to delete
 * Return: 1 if deleted, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr;
	dlistint_t *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	curr = *head;

	while (curr != NULL && i < index)
	{
		curr = curr->next;
		i++;
	}

	if (curr == NULL)
		return (-1);

	if (curr->next == NULL)
	{
		curr->prev->next = NULL;
		free(curr);
		return (1);
	}
	tmp = curr;
	curr->prev->next = curr->next;
	curr->next->prev = curr->prev;
	free(tmp);
	return (1);
}
