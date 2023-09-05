#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 * it with a certain char
 * @size: size of the array to be created
 * @c: char to initialize the array
 *
 * Return: pointer to the array (Success), NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (NULL);
	while (i < size)
	{
		p[i] = c;
		i++;
	}
	p[i] = '\0';
	return (p);
}
