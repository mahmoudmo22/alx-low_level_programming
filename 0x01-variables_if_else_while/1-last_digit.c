#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *  main - get a random number n and process it go get last
 *  digit and then print it to std output
 *  Return: 0 always
 *
 *
 */
int main(void)
{
	int n, lastDigit, theWholeNumber;

	srand(time(NULL));
	n = rand();
	theWholeNumber = n;
	printf("%d\n", n);
	lastDigit = n % 10;
	printf("Last digit of %d is %d ", theWholeNumber, lastDigit);
	if (lastDigit > 5)
		printf("and is greater than 5");

	else if (lastDigit < 6 && lastDigit != 0)
		printf("and is less than 6 and not 0");
	else
		printf("and is 0");
	printf("\n");
	return (0);
}
