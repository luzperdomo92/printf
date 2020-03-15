#include "holberton.h"
/* This is a file functions for print diferents type of character */
/**
 * print_char - print a only characters
 *
 * Return: 1 for add
 */
int print_char(va_list ls)
{
	int character = va_arg(ls, int);
		_puntchar(character);
	return (1);
}
/**
 * print_string - print a only characters
 *
 * Return: 1 for add
 */
int print_string(va_list ls)
{
	int i;
	char *str = va_arg(ls, char*);

	if (str == NULL)
	{
		return print_char_pointer("(null)");
	}
	return  print_char_pointer(str);
}

int print_char_pointer(char *string)
{
	int i;
	for(i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
		}
	return (i + 1);
}