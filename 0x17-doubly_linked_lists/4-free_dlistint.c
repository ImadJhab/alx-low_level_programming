#include "lists.h"
/**
 * free_dlistint - frees a list
 * @head: head of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *check;

	while (head != NULL)
	{
		check = head;
		head = head->next;
		free(check);
	}
}
