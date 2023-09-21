#include "lists.h"
/**
 * print_list - print a list of items
 * @h: pointer to first element of the list
 *
 * Return: number of elements in the list
*/
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		count++;
		h = h->next;
	}
	return (count);
}
