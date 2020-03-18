#include "holberton.h"
/* This is a file continuos functions for print diferents type of character */
/**
 * print_octal - function converter decimal to octal base
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_octal(va_list ls)
{
	return (print_numbers_octal(va_arg(ls, int)));
}
/**
 * print_unsig - function pint intgrer positive
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_unsig(va_list ls)
{
	return (print_numbers_unsig(va_arg(ls, int)));
}
