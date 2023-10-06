#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: new hash table
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_nd;
	char *cpy;
	unsigned long int i, pt;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
	{
		return (0);
	}
	cpy = strdup(value);
	if (cpy == NULL)
	{
		return (0);
	}
	pt = key_index((const unsigned char *)key, ht->size);
	for (i = pt; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy;
			return (1);
		}
	}
	new_nd = malloc(sizeof(hash_node_t));
	if (new_nd == NULL)
	{
		free(cpy);
		return (0);
	}
	new_nd->key = strdup(key);
	if (new_nd->key == NULL)
	{
		free(new_nd);
		return (0);
	}
	new_nd->value = cpy;
	new_nd->next = ht->array[pt];
	ht->array[pt] = new_nd;
	return (1);
}
