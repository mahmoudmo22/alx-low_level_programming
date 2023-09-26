#include "lists.h"
/**
 * print_listint - print elements of a list
 * @h: pointer to the list
 *
 * Return: size of list
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
