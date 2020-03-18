#include "holberton.h"
/* This is a file functions for print diferents type of character */
/**
 * print_char - print a only characters
 *@ls: is a list of arguments
 * Return: value of variable character
 */
int print_char(va_list ls)
{
	int character = va_arg(ls, int);

	va_end(ls);
	return (_putchar(character));
}
/**
 * print_string - print a sentence characters
 *@ls: is a list of arguments
 * Return: value of function print char pointer.
 */
int print_string(va_list ls)
{
	char *str = va_arg(ls, char*);

	if (str == NULL)
	{
		return (print_char_pointer("(null)"));
	}
	va_end(ls);
	return  (print_char_pointer(str));
}
/**
 * print_decimal - functions for beautifull code ;)
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_decimal(va_list ls)
{
	return (print_numbers(va_arg(ls, int)));
	va_end(ls);
}
/**
 * print_integrer - functions print interger.
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_integrer(va_list ls)
{
	return (print_decimal(ls));
	va_end(ls);
}
/**
 * print_binary - function converter decimal to binary
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_binary(va_list ls)
{
	return (print_numbers_binary(va_arg(ls, int)));
	va_end(ls);
}
