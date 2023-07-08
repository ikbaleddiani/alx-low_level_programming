#include "hash_tables.h"

/**
 * hash_table_set - adds an element new
 * @ht: the  hash table
 * @key: the key of new node
 * @value: the value of new node
 *
 * Return: 1 else 0 if it fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int i;
	hash_node_t **table;

	if (ht == NULL || value == NULL || *key == '\0' )
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	table = ht->array;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = (char *)key;
	node->value = (char *)value;
	node->next = table[i];
	table[i] = node;

	return (1);
}
