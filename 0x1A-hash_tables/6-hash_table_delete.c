#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int c = 0;
	hash_node_t *t1 = NULL;
	hash_node_t *comp = NULL;

	if (ht == NULL)
		return;


	while (c < ht->size)
	{
		t1 = ht->array[c];
		while (t1 != NULL)
		{
			comp = t1->next;
			free(t1->key);
			if (t1->value != NULL)
				free(t1->value);
			free(t1);
			t1 = comp;
		}
		c++;
	}


	free(ht->array);
	free(ht);
}
