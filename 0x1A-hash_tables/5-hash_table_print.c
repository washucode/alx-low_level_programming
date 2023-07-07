#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int f = 0;
	hash_node_t *temp = NULL;


	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (f == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			f = 1;
			temp = temp->next;
		}
		i++;
	}
	printf("}\n");
}
