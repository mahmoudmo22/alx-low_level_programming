#include "main.h"

/**
 * _calloc - create and initalize an array
 * @nmemb: number of objects
 * @size: size of one object
 *
 * Return: pointer to allocated space in memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	p = ptr;
	for (i = 0; i < nmemb * size; i++)
		p[i] = '\0';
	return (ptr);
}
