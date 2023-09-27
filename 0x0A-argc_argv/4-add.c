#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * is_all_digits - check if the string is all digits
 * @num: string to be checked
 *
 * Return: 0 if false 1 if true
*/
int is_all_digits(char *num)
{
	while (*num)
	{
		if (*num < '0' || *num > '9')
			return (0);
		num++;
	}
	return (1);
}
/**
 * _pow_recursion - power function
 * @x: base
 * @y: exponent
 *
 * Return: result of the power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
/**
 * reverseString - reverse a string
 * @str: string to be reversed
*/
void reverseString(char *str)
{
	int length = strlen(str);
	int i, j;
	char temp;

	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
	}
}

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, len, sum;

	s = strdup(s);
	len = 0;
	while (s[len])
		len++;

	reverseString(s);
	sum = 0;
	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
			continue;
		sum += _pow_recursion(10, i) * (s[i] - '0');
	}
	if (s[len - 1] == '-')
		sum = -sum;
	free(s);
	return (sum);

}

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{
	int sum, i, j, k;
	char *s;
	size_t contains_number;

	contains_number = 0;

	for (i = 1; i < argc; i++)
	{
		s = argv[i];
		if (*s == '\0' || s == NULL)
			continue;
		j = 0;
		if (s[j] == '-')
			j++;
		while (s[j])
		{
			if (s[j] >  '9' || s[j] < '0')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		contains_number++;
	}
	if (contains_number == 0)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (k = 1; k < argc; k++)
	{
		s = argv[k];
		if (*s == '-')
			continue;
		if (is_all_digits(s))
			sum += _atoi(s);
		else
			continue;
	}

	printf("%d\n", sum);
	return (0);
}
