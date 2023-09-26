#include "lists.h"
int pop_listint(listint_t **head)
{
	int data;
	listint_t *old_head;

	if (head == NULL || *head == NULL)
		return (0);
	old_head = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(old_head);
	return (data);
}
