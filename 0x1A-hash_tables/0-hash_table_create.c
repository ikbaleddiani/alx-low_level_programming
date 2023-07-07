#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly creates hash table otherwise NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = malloc(sizeof(hash_table_t));

	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(size * sizeof(hash_node_t *));
	if (hash_t->array == NULL)
	{
		return (NULL);
	}
	return (hash_t);
}
