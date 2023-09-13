#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to argv.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	int new_str_len, i;
	char *new_str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		new_str_len += strlen(av[i]);
	}
	new_str = calloc(new_str_len + ac + 1, sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		strcat(new_str, av[i]);
		strcat(new_str, "\n");
	}
	return (new_str);
}
