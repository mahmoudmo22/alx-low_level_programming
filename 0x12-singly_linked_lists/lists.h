#ifndef ALX_LOW_LEVEL_PROGRAMMING_LISTS_H
#define ALX_LOW_LEVEL_PROGRAMMING_LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list - singly linked list
 * @str: Cstring
 * @len: length of the string
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
