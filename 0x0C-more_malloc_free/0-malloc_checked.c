#include "main.h"
/**
 * malloc_checked - return a pointer to allocated memory
 * @b: size in bytes
 *
 * Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (b == NULL)
		exit(98);
	return p;
}
