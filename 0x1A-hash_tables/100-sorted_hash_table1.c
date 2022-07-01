#include "hash_tables.h"

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * Return: No return
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *tmp;

	if (ht == NULL)
		return;

	node = ht->shead;
	while (node)
	{
		tmp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}

	free(head->array);
	free(head);
}

/**
 * check_new_key - checks if key is NULL
 * @new: pointer
 * @value_copy: value
 * Return: 0
 */
int check_new_key(shash_node_t *new, char *value_copy)
{
	if (new->key == NULL)
	{
		free(value_copy);
		free(new);
		return (0);
	}
	return (0);
}

/**
 * check_shead - creates a list
 * @new: pointer
 * @ht: hash table
 * @key: key
 * @tmp: pointer
 * Return: No return
 */
void check_shead(shash_node_t *new, shash_table_t *ht, const char *key \
shash_node_t *tmp)
{
	if (ht->shead == NULL)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->shead = new;
		ht->stail = new;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		new->sprev = tmp;
		new->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new;
		else
			tmp->snext->sprev = new;
		tmp->snext = new;
	}
}
