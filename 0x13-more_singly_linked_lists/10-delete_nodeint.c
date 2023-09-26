#include "lists.h"
/**
 * delete_nodeint_at_index - delete an enrty at index  idx
 * @head: head fo the list
 * @index: index
 *
 * Return: (1) succeeded (-1) fail
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t  *curr_node, *temp_node;

	if (head == NULL || *head == NULL)
		return (-1);
	curr_node = *head;
	if (index == 0)
	{
		*head = curr_node->next;
		free(curr_node);
		return (1);
	}
	i = 0;
	while (curr_node && i < index)
	{
		if (i == index - 1) /* next node will be deleted*/
		{
			temp_node = curr_node->next;
			curr_node->next = temp_node->next;
			free(temp_node);
			return (1);

		}
			curr_node = curr_node->next;
			i++;
	}
	return (-1);
}
