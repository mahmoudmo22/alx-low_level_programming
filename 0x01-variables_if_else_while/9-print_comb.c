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

	for (i = '1'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
