#include "lists.h"
/**
 * get_nodeint_at_index - get the index of the node
 * @head: the list
 * @index: index
 *
 * Return: data at that index
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (head && i != index)
	{
		head = head->next;
		i++;
	}
	return (head);
}
