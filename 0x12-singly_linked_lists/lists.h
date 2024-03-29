#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct node -linked list
 * @str : string
 * @len : length of string
 * @next : point to next node
 */


typedef struct node
{
	char *str;
	int len;
	struct node *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
