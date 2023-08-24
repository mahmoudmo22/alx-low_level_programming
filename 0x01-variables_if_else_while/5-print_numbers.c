#include <stdio.h>

/**
 * main - print decimal digits
 * Return: 0 always
 *
 *
*/
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; ++i)
		putchar(i);
	putchar('\n');
	return (0);
}
