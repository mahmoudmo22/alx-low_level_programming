#include <stdio.h>

/**
 * main - hexadecimal digits
 * Return: 0 always
 *
 *
*/
int main(void)
{
	int j;
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = i + 1; j <= '9'; ++j)
		{
			putchar(i);
			putchar(j);
			if (i == '8' && j == '9')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
