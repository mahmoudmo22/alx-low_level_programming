#include "lists.h"
/**
 * free_listint - free listint
 * @head: list
*/
void free_listint(listint_t *head)
{
	listint_t  *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
