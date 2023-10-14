#ifndef _SORTING_ALGOS_H_
#define _SORTING_ALGOS_H_


/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Structures */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
		const int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Singly linked list with express lane
 * @n: Integer stored in the node
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 */
typedef struct skiplist_s
{
		int n;
		size_t index;
		struct skiplist_s *next;
		struct skiplist_s *express;
} skiplist_t;


/* Prototypes */
/* linear search */
int linear_search(int *array, size_t size, int value);
/* binary search */
int binary_search(int *array, size_t size, int value);
/* jump search */
int jump_search(int *array, size_t size, int value);
/* interpolation search */
int interpolation_search(int *array, size_t size, int value);
/* exponential search */
int exponential_search(int *array, size_t size, int value);
/* advanced binary search */
int advanced_binary(int *array, size_t size, int value);
/* jump list */
listint_t *jump_list(listint_t *list, size_t size, int value);
/* linear skip */
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* _SORTING_ALGOS_H_ */
