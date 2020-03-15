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
		{'s', print_string}
	};

	int op_i;

	for (op_i = 0; op_i < 2; op_i++)
	{
		if (operations[op_i].input_type == c)
		{
			return (operator[op_i]->function(list_args));
		}
	}
	return (-1);
}
