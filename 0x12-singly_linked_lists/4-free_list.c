#include "lists.h"
/**
 * free_list - frees a list  of elements
 * @head: pointer to a list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		free(head->str);
		temp = head;
		head = head->next;
		free(temp);
	}
}
