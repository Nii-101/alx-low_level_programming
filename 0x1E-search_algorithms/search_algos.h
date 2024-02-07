#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


/**
 * struct listint_s - singly linked list
 *
 * @n: The Integer
 *
 * @index: The index of the node in the list
 *
 * @next: The Pointer to the next node
 *
 * Description: A singly linked list node structure
 * for search algorithms project
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;



/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: The Integer
 *
 * @index: The index of the node in the list
 *
 * @next: The Pointer to the next node
 *
 * Description: A singly linked list node structure
 * for search algorithms project
 */
typedef struct skiplist_s
{
    int n;
    size_t index;
    struct skiplist_s *next;
    struct skiplist_s *express;
} skiplist_t;


int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int _binary_search(int *array, size_t left, size_t right, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary_recursive(int *array, size_t left, size_t right, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif
