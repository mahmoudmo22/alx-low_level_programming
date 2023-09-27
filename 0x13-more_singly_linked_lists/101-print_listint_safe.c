#include "lists.h"
/**
 * print_listint_safe - print list
 * @head: the list
 *
 * Return: size of the list
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	list_t  addresses;

	if (head == NULL)
		exit(98);
	count = 0;
	addresses = createlist(20);
	while (head)
	{
		if (search_index(&addresses, (size_t)head) != -1)
			break;
		printf("[%p] %d\n", (void *)head, head->n);
		add_to_list(&addresses, (size_t)head);
		count++;
		head = head->next;
	}
	return (count);
}
