#ifndef HOLBERTON_H
#define HOLBERTON_H
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
	int (*function)(va_list);
} print_value_t;

int _putchar(char c);
int _printf(const char *format, ...);
int call_print_function(char c, va_list list_args)
int print_char(va_list);
int print_string(va_list);
int print_char_pointer(char *string);
int print_numbers(int a);
int print_integrer(va_list ls);
int print_decimal(va_list ls);
#endif
