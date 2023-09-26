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

	if (head == NULL)
		exit(98);
	count = 0;
	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
