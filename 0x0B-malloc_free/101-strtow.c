#include <stdlib.h>
#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int word_count;
	char *str = s;

	word_count = 0;
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z'))
		{
			str++;
			continue;
		}
		while (*str != ' ' && *str)
			str++;
		word_count++;
	}
	return (word_count);
}
/**
 * get_first_word - extract first word of a string
 * @str: string to get first word from
 * @off_set: off set of the call to string
 * Return: the pointer to target
 *
*/
char *get_first_word(char *str, int *off_set)
{
	char *word = calloc(30, sizeof(char));
	int i;

	*off_set = 0;
	i = 0;
	if (word == NULL)
		return (NULL);
	while (*str)
	{
		if (!(*str >= 'a' && *str <= 'z' || *str >= 'A' && *str <= 'Z'))
		{
			++(*off_set);
			str++;
			continue;
		}
		while (*str != ' ' && *str != '\n' && *str) /* get firsst word into word*/
		{
			word[i] = *str;
			++(*off_set);
			i++;
			str++;
		}
		break;
	}
	word[i] = '\0';
	if (*str == NULL)
		--(*off_set);
	return (word);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	int word_count, off_set, i, j;
	char *word;

	word_count = count_word(str);
	printf("words count is %d\n", word_count);
	char **words = calloc(word_count + 1, sizeof(char **));

	printf("words address = %p\n", words);
	if (words == NULL)
	{
		printf("words returned NULL\n");
		return (NULL);
	}
	for (i = 0; i < word_count; i++)
	{
		printf("%d iteration of getting word\n", i);
		word = get_first_word(str, &off_set);
		printf("offset = %d word: %s\n", off_set, word);
		words[i] = strdup(word);
		printf("addres of word %p\n", words[i]);
		free(word);
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			return (NULL);
		}
		str += off_set;
	}
	words[word_count] = NULL;
	return (words);
}
