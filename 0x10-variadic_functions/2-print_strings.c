#include "variadic_functions.h"

/**
 * print_strings - prints strings seperated with the seperator
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char*);
		if (str == NULL)
			str = "(nil)";
		if (separator == NULL)
			printf("%s", str);
		else if (i != n - 1)
			printf("%s%s", str, separator);
		else
			printf("%s", str);
	}
	printf("\n");
	va_end(args);
}
