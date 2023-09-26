#include "lists.h"
/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
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
