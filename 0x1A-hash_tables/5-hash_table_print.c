#include "hash_tables.h"

/**
 * hash_table_print - funct that prints a hash table
 * @ht: reference to the hash table
 * Return: return nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;
	int error_flag = 0;

	if (!ht)
		return;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			if (!ht->array[i]->next)
			{
				if (error_flag)
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				error_flag = 1;
			}
			else
			{
				temp = ht->array[i];
				while (temp)
				{
					if (error_flag)
						printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
					error_flag = 1;
					temp = temp->next;
				}
			}
		}
		i++;
	}
	printf("}\n");
}
