#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *curr = head;
	list_t *next = head;

	if (!head)
		return;
	while (curr)
	{
		next = curr->next;
		free(curr->str);
		free(curr);
		curr = next;
	}

}
