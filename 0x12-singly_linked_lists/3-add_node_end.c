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
	list_t *new, *next;

	size_t len;

	len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	next = *head;
	if (next == NULL)
	{
		*head = new;
		return (new);
	}
	while (next->next != NULL)
		next = next->next;
	next->next = new;

	return (new);
}
