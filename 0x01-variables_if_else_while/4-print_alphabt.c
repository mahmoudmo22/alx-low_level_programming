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
	{
		if (i == 'q' || i == 'e')
			continue;
		putchar(i);
	}
	putchar('\n');
	return (0);
}
