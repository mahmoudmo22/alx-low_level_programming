#include "lists.h"
/**
 * reverse_listint - reverse a linked list
 * @head: the list
 *
 * Return: pointer  for the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *temp, *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	curr = NULL;
	next = *head;
	while (next)
	{
		temp = next->next;
		next->next = curr;
		curr = next;
		next = temp;
	}
	*head = curr;
	return (curr);
}
