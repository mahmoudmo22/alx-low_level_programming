#ifndef ALX_LOW_LEVEL_PROGRAMMING_LISTS_H
#define ALX_LOW_LEVEL_PROGRAMMING_LISTS_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct list - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list
{
	int n;
	struct list *next;
} listint_t;

size_t free_listint_safe(listint_t **h);
size_t print_listint_safe(const listint_t *head);
listint_t *reverse_listint(listint_t **head);
size_t listint_len(const listint_t *h);
size_t print_listint(const listint_t *h);
int pop_listint(listint_t **head);
void free_listint2(listint_t **head);
void free_listint(listint_t *head);
listint_t *add_nodeint(listint_t **head, int n);
listint_t *add_nodeint_end(listint_t **head, int n);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
int sum_listint(listint_t *head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
#endif
