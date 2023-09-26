#include "lists.h"
/**
 * add_nodeint - add node the beginning of
 * a list
 * @head: pointer to pointer to the list
 * @n: data to be added
 *
 * Return: pointer to the node
*/
listint_t *add_nodeint(listint_t **head, int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* NULL if failed*/
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
