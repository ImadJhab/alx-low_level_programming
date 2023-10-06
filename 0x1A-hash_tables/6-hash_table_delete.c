#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *new_nd, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			new_nd = ht->array[i];
			while (new_nd != NULL)
			{
				temp = new_nd->next;
				free(new_nd->key);
				free(new_nd->value);
				free(new_nd);
				new_nd = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
