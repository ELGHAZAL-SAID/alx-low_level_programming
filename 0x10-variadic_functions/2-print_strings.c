#include "variadic_functions.h"

/**
* print_strings - print characters
* @separator: separator between chars
* @n: number of parameters passed
* Return: 0
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;
	char *string;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		if (string != 0)
			printf("%s", string);
		else
			printf("(nil)");
		if (i == n - 1)
			continue;
		if (separator != 0)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
