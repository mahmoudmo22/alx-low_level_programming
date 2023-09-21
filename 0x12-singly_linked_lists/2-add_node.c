#include "lists.h"
/**
 * add_node - add node to aa list
 * @head: pointer to pointer to first element
 * @str:
 *
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len;

	len = 0;
	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	*head = new;
	return (new);
}
