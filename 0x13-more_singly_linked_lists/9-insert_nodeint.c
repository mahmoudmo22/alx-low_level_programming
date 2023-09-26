#include "lists.h"
/**
 * insert_nodeint_at_index - insert a ndoe at a given positon
 * @head: the list
 * @idx: index
 * @n:data
 *
 * Return: pointer the node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t  *new_node, *curr_node;
	unsigned int i;

	if (head == NULL) /* check if the list exist*/
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL) /* failed to allocate */
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	i = 0;
	curr_node = *head;
	while (curr_node && i < idx)
	{
		if (i == idx - 1)
		{
			new_node->next = curr_node->next;
			curr_node->next = new_node;
			new_node->n = n;
			return (new_node);
		}
		curr_node = curr_node->next;
		i++;
	}
	free(new_node);
	return (NULL); /* invalid index*/
}
