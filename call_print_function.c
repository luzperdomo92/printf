#include "holberton.h"
/**
 * call_print_function - call the function to be print.
 * @c: variable type char
 * @list_args: variable va_list
 * Return: value call_print_function  amount of chars printed
 */
int call_print_function(char c, va_list list_args)
{
	print_value_t operations[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_decimal},
		{'i', print_integrer},
		{'b', print_binary},
		{'o', print_octal},
		{'u', print_unsig}
	};

	int op_i;

	if (c == '\0')
	{
		return (-1);
	}

	if (c == '%')
	{
		return (_putchar('%'));
	}

	for (op_i = 0; op_i < 7; op_i++)
	{
		if (operations[op_i].input_type == c)
		{

			return (operations[op_i].function(list_args));
		}
	}
	va_end(list_args);
	return (_putchar('%') + _putchar(c));
}
