#include "lists.h"
/**
 * sum_listint - calculate the sum of a list of integer
 * @head: the list
 *
 * Return :the sum of the list
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
