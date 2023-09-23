#include "main.h"
/**
 * check_for_over_flow - check for integer over flow;
 * @p: pointer to the integer
*/
void check_for_over_flow(int *p)
{
	int num;

	if (*p > 9)
	{
		num = *p;
		*p = num % 10;
		*(p + 1) += num / 10;
	}
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
 * mul_two_str_nums - takes two numbers represented as
 * strings and multiply  them
 * @num1: first number
 * @num2: second number
 *
 * Return : string two the result
*/
char *mul_two_str_nums(char *num1, char *num2)
{
	int *result_in_ints;
	char *result;
	int len1, len2;
	int  i, j;

	len1 = 0;
	len2 = 0;
	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;
	result_in_ints = calloc(len2 + len1, sizeof(int));
	result = malloc(len1 + len2 + 1);
	if (result_in_ints == NULL || result == NULL)
		exit(EXIT_FAILURE);
	reverseString(num1);
	reverseString(num2);
	for (i = 0; i < len1; ++i)
	{
		for (j = 0; j < len2; ++j)
		{
			int x, y;

			x = num1[i] - '0';
			y = num2[j] - '0';
			check_for_over_flow(&result_in_ints[i + j]);
			result_in_ints[i + j] += (x * y) % 10;
			result_in_ints[i + j + 1] += (x * y) / 10;
			check_for_over_flow(&result_in_ints[i + j]);
		}
	}
	for (i = 0; i < len1 + len2; ++i)
		result[i] = result_in_ints[i]  + '0';
	i = len1 + len2 - 1;
	while (result[i] == '0')
		i--;
	result[i + 1] = '\0';
	reverseString(result);
	free(result_in_ints);
	return (result);
}

/**
 * main - mul to function
 * @argc: number arguments
 * @argv: arguments ass an array
 *
 * Return: 0 always
*/
int main(int argc, char **argv)
{
	char *num1, *num2;

	num1 = argv[1];
	num2 = argv[2];
	if (argc != 3 || !(is_all_digits(num1)) || !(is_all_digits(num2)))
	{
		printf("Error\n");
		exit(98);
	}
	printf("%s", mul_two_str_nums(argv[1], argv[2]));
	return (0);
}
