#ifndef VAR_FUNCTION_H
#define VAR_FUNCTION_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
* struct op - type of data
* @type: type name
* @f: pointer to function
*/
typedef struct op
{
	char *type;
	void (*f)(va_list);
} opt;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void get_string_type(va_list arg);
void get_float_type(va_list arg);
void get_int_type(va_list arg);
void get_char_type(va_list arg);
void print_all(const char * const format, ...);



#endif
