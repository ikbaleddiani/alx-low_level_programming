#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: key to enter
 * @size: size of the array of the hash table
 *
 * Return:the index at which the key/value pair should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int i = 0;

	i = hash_djb2(key) % size;
	return (i);
}
