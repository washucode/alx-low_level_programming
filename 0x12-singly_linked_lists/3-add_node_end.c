#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds node to the end of a linked list
 * @head: pointer to head
 * @str: data to be added
 * Return: the new last node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *lastNode;
	list_t *this = *head;
	char *newStr;
	int len;

	lastNode = malloc(sizeof(struct node));
	if (lastNode == NULL)
		return (NULL);

	newStr = strdup(str);
	if (str == NULL)
	{
		free(lastNode);
		return (NULL);
	}

	len = 0;
	while (newStr[len])
		len++;

	lastNode->str = newStr;
	lastNode->len = len;
	lastNode->next = NULL;

	if (*head == NULL)
		*head = lastNode;
	else
	{
		while (this->next != NULL)
			this = this->next;
		this->next = lastNode;
	}
	return (*head);
}
