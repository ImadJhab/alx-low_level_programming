#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_nd;
	unsigned long int i;
	unsigned char com = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (com == 1)
			{
				printf(", ");
			}
			new_nd = ht->array[i];
			while (new_nd != NULL)
			{
				printf("'%s': '%s'", new_nd->key, new_nd->value);
				new_nd = new_nd->next;
				if (new_nd != NULL)
				{
					printf(", ");
				}
			}
			com = 1;
		}
	}
	printf("}\n");
}
