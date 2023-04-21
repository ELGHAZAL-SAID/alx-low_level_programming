#include "variadic_functions.h"

/**
* get_chat_type - print char type
* @arg: list of args
* Return: 0;
*/

void get_char_type(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
* get_int_type - print int type
* @arg: list of args
* Return: 0
*/

void get_int_type(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
* get_float_type - print float type
* @arg: list of args
* Return: 0;
*/

void get_float_type(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
* get_string_type - print string type
* @arg: list of args
* Return: 0;
*/

void get_string_type(va_list arg)
{
	char *value;

	value = va_arg(arg, char *);
	if (value == 0)
		printf("(nil)");
	printf("%s", value);
}

/**
* print_all - print anything
* @format: list of types of args passed to the function
* Return: 0
*/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arg;

	op ftype[] = {
		{'c', get_char_type},
		{'i', get_int_type},
		{'f', get_float_type},
		{'s', get_string_type}
	};

	va_start(arg, format);
	while (*(format + i) != 0 && format != 0)
	{
		j = 0;

		while (j < 4 && (format[i] != ftype[j].type))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			ftype[j].f(arg);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
