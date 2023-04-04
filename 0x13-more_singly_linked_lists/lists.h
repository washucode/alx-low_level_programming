#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>


/**
 * struct listint_s - singly linked list
 *@n: integer
 * @next: point to next node
 * Description: singly linked list node struct
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int n);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);
int _putchar(char c);


#endif