#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string given as parameter
 * to a heap
 * @str: string to allocate in heap using malloc
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char* _strdup(char *str)
{
	char *new;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;
	new = malloc(sizeof(char) * (len + 1));

	if (new == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
