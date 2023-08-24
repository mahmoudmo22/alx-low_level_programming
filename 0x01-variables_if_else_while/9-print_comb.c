#include <stdio.h>

/**
 * main - hexadecimal digits
 * Return: 0 always
 *
 *
*/
int main(void)
{
	int i;

	putchar('0');
	for (i = '1'; i <= '9'; i++)
	{
		putchar(',');
		putchar(' ');
		putchar(i);
	}
	return (0);
}
