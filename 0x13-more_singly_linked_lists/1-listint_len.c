#include "lists.h"
/**
 * listint_len - calculate number of elements of a listc
 * @h: pointer to the list
 *
 * Return: size of list
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
