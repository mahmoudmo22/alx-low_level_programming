#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: smallest value
 * @max: max value
 *
 * Return: pointer to the base address
*/

int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = calloc(max - min + 1, sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		p[i - min] = i;
	return (p);
}
