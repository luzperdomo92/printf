#include "holberton.h"
/* This is a file functions for print diferents type of character */
/**
 * print_char - print a only characters
 *@ls: is a list of arguments
 * Return: 1 for add
 */
int print_char(va_list ls)
{
	int character = va_arg(ls, int);

		_putchar(character);
	return (1);
}
/**
 * print_string - print a sentence characters
 *@ls: is a list of arguments
 * Return: 1 for add or 0 is void
 */
int print_string(va_list ls)
{
	char *str = va_arg(ls, char*);

	if (str == NULL)
	{
		return (print_char_pointer("(null)"));
	}
			return  (print_char_pointer(str));
}
/**
 * print_decimal - functions for beautifull code ;)
 *@ls: is a ls of the list of arguments
 * Return: 1 for add
 */
int print_decimal(va_list ls)
{
	return (print_numbers(va_arg(ls, int)));
}
/**
 * print_integrer - functions for beautifull code ;)
 *@ls: is a ls of the list of arguments
 * Return: 1 for add
 */
int print_integrer(va_list ls)
{
	return (print_decimal(ls));
}
