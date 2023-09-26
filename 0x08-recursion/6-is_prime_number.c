#include "main.h"
/**
 * isPrime - implementation in recursion
 * @n: number to be checked
 * @divisor: divisor
 *
 * Return: 0 or 1
*/
int isPrime(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor <= 1)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}
	return (isPrime(n, divisor - 1));
}
/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, n - 1));
}
