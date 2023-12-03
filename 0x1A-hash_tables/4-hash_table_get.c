#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: Hash table
 * @key: The key
 * Return: return the value or NULL if nothing there
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (!ht)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	for (; temp; temp = temp->next)
	{
		if (strncmp(key, temp->key, strlen(temp->key) + 1) == 0)
			return (temp->value);
	}

	return (NULL);
}
