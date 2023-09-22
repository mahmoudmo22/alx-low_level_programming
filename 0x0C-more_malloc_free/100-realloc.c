#include "main.h"
/**
 * _realloc - reallocate memory in heap
 * @old_size: size of old chunk in bytes
 * @new_size: size of new chunk in bytes
 * @ptr: pointer to previous allocation
 *
 * Return: pointer to new allocated chunk
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new_ptr);
	if (new_size == 0)
	{
		free(new_ptr);
		new_ptr = NULL;
	}
	else if (new_size > old_size)
		memcpy(new_ptr, ptr, old_size);
	else if (new_size < old_size)
		memcpy(new_ptr, ptr, new_size);
	else
	{
		free(new_ptr);
		return (ptr);
	}
	free(ptr);
	return (new_ptr);
}
