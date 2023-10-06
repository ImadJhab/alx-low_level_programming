#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 * Return: If an error occurs - NULL
 * a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hsh;
	unsigned long int i;

	hsh = malloc(sizeof(hash_table_t));
	if (hsh == NULL)
	{
		return (NULL);
	}
	hsh->size = size;
	hsh->array = malloc(sizeof(hash_node_t *) * size);
	if (hsh->array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		hsh->array[i] = NULL;
	}
	return (hsh);
}
