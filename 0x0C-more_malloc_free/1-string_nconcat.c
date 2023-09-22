#include "main.h"

/**
 * string_nconcat - concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to the new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *new_str, *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	len2 = 0;
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	new_str = malloc(len1 + len2 + 1);
	if (new_str == NULL)
		return (NULL);
	new = new_str;
	while (*s1)
	{
		*new_str = *s1;
		s1++;
		new_str++;
	}
	while (*s2 && n)
	{
		*new_str = *s2;
		s2++;
		new_str++;
		n--;
	}
	*new_str = '\0';
	return (new);
}
