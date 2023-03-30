#include "lists.h"
#include <string.h>

/**
 * add_node - add node after head
 * @head: pointer to head
 * @str: string to be added
 * Return: the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t  *newNode;
	char *newString;
	int str_len;

	newNode = malloc(sizeof(struct node));
	if (newNode == NULL)
		return (NULL);

	newString = strdup(str);

	if (newString == NULL)
	{
		free(newNode);
		return (NULL);
	}

	str_len = 0;
	while (newString[str_len])
		str_len++;

	newNode->str = newString;
	newNode->len = str_len;
	newNode->next = *head;

	*head = newNode;

	return (newNode);
}
