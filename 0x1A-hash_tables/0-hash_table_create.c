#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: array size of hash table
 *
 * Return: pointer to hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht)
	{
		ht->size = size;
		ht->array = (hash_node_t **)malloc(size * sizeof(hash_node_t *));
		bzero(ht->array, size * sizeof(hash_node_t *));
	}
	return (ht);
}