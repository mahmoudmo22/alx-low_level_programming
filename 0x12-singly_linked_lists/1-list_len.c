#include "lists.h"
/**
 * list_len - tarverse a llinked list and return number of elemetns
 * @h: pointer for the first elements
 *
 * Return: number of elements
*/
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
