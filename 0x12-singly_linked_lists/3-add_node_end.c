#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to head
 * @str: data to be added
 * Return: the new last node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode;
	list_t *cur;
	char *newStr;
	int len;

	lastNode = malloc(sizeof(list_t));
	if (lastNode == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(lastNode);
		return (NULL);
	}

	newStr = strdup(str);

	for (len = 0; newStr[len];)
		len++;

	lastNode->str = newStr;
	lastNode->len = len;
	lastNode->next = NULL;

	if (*head == NULL)
		*head = lastNode;
	else
	{
		cur = *head;
		while (cur->next != NULL)
			cur = cur->next;
		cur->next = lastNode;
	}
	return (*head);
}
