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
	int k;
	int count = 0;

	for (i = '0'; i <= '7'; i++)
	{
		for (k = i + 1; k <= '8' ; ++k)
		{
			for (j = k + 1; j <= '9'; ++j)
			{
				putchar(i);
				putchar(k);
				putchar(j);
				count++;
				if (i == '7' && k == '8' && j == '9')
					break;
				putchar(',');
				putchar(' ');
			}

		}
	}
	putchar('\n');
	return (0);
}
