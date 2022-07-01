#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value associated with the element, or NULL if key couldn’t
 * be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *actual = NULL;
	unsigned long int index;

	if (ht == NULL || *key == 0 || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	actual = ht->array[index];
	while (actual != NULL)
	{
		if (strcmp(actual->key, key) == 0)
			return (actual->value);
		actual = actual->next;
	}
	return (NULL);
}
