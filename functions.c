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
}
/**
 * print_integrer - functions for beautifull code ;)
 *@ls: is a ls of the list of arguments
 * Return: value of function.
 */
int print_integrer(va_list ls)
{
	return (print_decimal(ls));
}
/**
 * print_module - functions for beautifull code ;
 *@ls: is a ls of the list of arguments
 * Return: value of function
 */
int print_module(va_list ls)
{
	return (_putchar('%'));
}

