#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a random number n and check if it's positive
 * or negative and the print on screen
 * Return: always 0 (success)
 */

int main(void)
{
	int min = -255;
	int max = 255;
	int n;

	srand(time(NULL));

	n = min + rand() % (max - min + 1);


	if (n > 0)
	{
		printf("is positive");
	}
	else if (n < 0)
	{
		printf("is negative");
	}
	else
	{
		printf("is zero");
	}
	return (0);
}
