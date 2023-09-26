#include "lists.h"
/**
 * add_nodint_end - add a node to the end
 * @head: pointer to pointer to the list
 * @n: data
 *
 * Return: pointer to the new node
*/
listint_t *add_nodeint_end(listint_t **head, int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->next = NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next; /* aah */
	temp->next = new_node;
	return (new_node);
}
