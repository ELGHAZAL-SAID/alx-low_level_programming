#include "variadic_functions.h"

/**
* print_numbers - print numbers
* @separator: to be printed between numbers
* @n: number of integers
* Return: 0
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (i == n - 1)
			continue;
		if (separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
