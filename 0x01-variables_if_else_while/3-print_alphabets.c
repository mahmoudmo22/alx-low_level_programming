#include <stdio.h>

/**
 * main - print lower case alphabet
 * Return: 0 always
 *
 *
*/
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
		putchar(i);
	putchar('\n');
	for (i = 'A'; i <= 'Z'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
