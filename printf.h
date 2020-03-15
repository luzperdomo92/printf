#ifndef PRINTF_H
#define PRINTF_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * struct print_value - print_value
 * @input_type: the operator
 * @f: The function associated
 */
typedef struct print_value
{
	char input_type;
	int (*f)(va_list);
} print_value_t;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int choose_print(va_list, char);
#endif
