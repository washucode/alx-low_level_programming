#include "hash_tables.h"


/**
 * set_node - sets a node
 * @key: key
 * @value: value associated with the key
 *
 * Return: pointer to the node
 */

hash_node_t *set_node(const char *key, const char *value)
{
	hash_node_t *node = NULL;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(strlen(key) + 1);

	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);

	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	strcpy(node->key, key);
	strcpy(node->value, value);
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table update the key/value
 * @key: key
 * @value: value associated with the key
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i = 0;
	hash_node_t *temp = NULL;
	hash_node_t *new_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[i];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);

			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	new_node = set_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}
