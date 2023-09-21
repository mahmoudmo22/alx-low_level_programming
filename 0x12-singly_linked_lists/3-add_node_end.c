#include "lists.h"
/**
 * add_node_end - add node to the end of a linked list
 * @head: pointer to a pointer of the first element
 * @str: data to be added
 *
 * Return: pointer to the element added
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *current_node;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL || head == NULL)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new;
		return (new);
	}
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new;
	return (new);
}
