#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: Hash table to be edited.
 * @key: The key
 * @value: The value of the key
 * Return: 1 if it succeeded, 0 if it fails
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *custom_node, *temp;
	unsigned long int i = 0;

	if (!ht || !key || key[0] == '\0')
		return (0);
	i = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[i];
	while (temp)
	{
		if (strncmp(key, temp->key, strlen(temp->key) + 1) == 0)
		{
			strcpy(temp->value, value);
			return (1);
		}
		temp = temp->next;
	}
	custom_node = malloc(sizeof(hash_node_t));
	custom_node->key = strdup(key);
	custom_node->value = strdup(value);
	custom_node->next = ht->array[i];
	ht->array[i] = custom_node;

	return (1);
}
