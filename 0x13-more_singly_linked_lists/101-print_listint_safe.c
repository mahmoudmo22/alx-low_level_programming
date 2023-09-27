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
		printf("%d\n", head->n);
		add_to_list(&addresses, (size_t)head);
		count++;
		head = head->next;
	}
	return (count);
}
