#include "lists.h"
/**
 * createlist - create a dynamic list of type size_t
 * @initial_size: initial size of the list
 *
 * Return: the list (data, size, capacity)
*/
list_t createlist(size_t initial_size)
{
	list_t nums;

	nums.data = calloc(initial_size, sizeof(size_t));
	if (nums.data == NULL)
		exit(EXIT_FAILURE);
	nums.size = 0;
	nums.capacity = initial_size;
	return (nums);
}
/**
 * add_to_list - add an element to the list
 * @list: list to append to
 * @data: data to add
*/
void add_to_list(list_t *list, size_t data)
{
	size_t indx;

	if (list->capacity <= list->size)
	{
		list->capacity = list->capacity * 2;
		list->data = realloc(list->data, list->capacity * sizeof(size_t));
		if (list->data == NULL)
			exit(EXIT_FAILURE);
	}
	indx = list->size;
	*(list->data + indx) = data;
	list->size++;
}
/**
 * search_index - search for an element and return it's index
 * @nums: the list
 * @target: the target
 *
 * Return: the index of the item
*/
int search_index(list_t *nums, size_t target)
{
	size_t i;

	for (i = 0; i < nums->size; i++)
		if (*(nums->data + i) == target)
			return (i);
	return (-1);
}
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count;
	listint_t *temp, *curr;
	list_t addresses;

	if (h == NULL)
		return (0);
	addresses = createlist(100);
	count = 0;
	temp = NULL;
	curr = *h;
	while (curr)
	{
		if (search_index(&addresses, (size_t)curr) != -1)
			break;
		count++;
		add_to_list(&addresses, (size_t)curr);
		temp = (curr)->next;
		free(curr);
		curr = temp;
	}
	*h = NULL;
	return (count);
}
