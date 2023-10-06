#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: the key you are looking for
 * Return: the value associated with the element,
 *  or NULL if key couldn’t be found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_nd;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
	{
		return (NULL);
	}
	new_nd = ht->array[i];
	while (new_nd && strcmp(new_nd->key, key) != 0)
	{
		new_nd = new_nd->next;
	}
	return ((new_nd == NULL) ? NULL : new_nd->value);
}
