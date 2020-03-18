#include "holberton.h"
#include <limits.h>
/**
 * print_char_pointer - functions for beautifull code ;)
 *@string: is a ls of the list of arguments
 * Return: 1 for add
 */
int print_char_pointer(char *string)
{
	int i;
	int count = 0;

	for (i = 0; string[i] != '\0'; i++)
	{
		count += _putchar(string[i]);
	}
	return (count);
}
/**
 * print_numbers - functions for beautifull code ;)
 *@int_a: is a ls of the list of arguments
 * Return: 1 for add
 */
int print_numbers(long int int_a)
{
	int count  = 0;
	long int a = int_a;

	if (int_a < 0)
	{
		count += _putchar('-');
		a = -int_a;
		if (int_a == INT_MIN)
		{
			a = (long int)1 + INT_MAX;
		}
	}

	if (a / 10)
	{
		count += print_numbers(a / 10);

		count += _putchar((a % 10) + '0');
	}
	else
	{
	    count += _putchar(a + '0');
	}

	return (count);
}
/**
 * print_numbers_binary - functions function converter decimal to binary
 *@a: is a ls of the list of arguments
 * Return: cant of numbers binary
 */
int print_numbers_binary(int a)
{
	int count  = 0;

	if (a < 0)
	{
		return (-1);
	}
	if (a / 2)
	{
		count += print_numbers_binary(a / 2);
		count += _putchar((a % 2) + '0');
	}
	else
	{
		count += _putchar(a + '0');
	}
	return (count);
}
/**
 * print_numbers_octal - functions function converter decimal to octal base
 *@a: is a ls of the list of arguments
 * Return: cant of numbers binary
 */
int print_numbers_octal(int a)
{
	int count  = 0;

	if (a <= 0)
	{
		count += _putchar('0');
		return (count);
	}
	if (a / 8)
	{
		count += print_numbers_octal(a / 8);
		count += _putchar((a % 8) + '0');
	}
	else
	{
		count += _putchar(a + '0');
	}
	return (count);
}
/**
 * print_numbers_unsig - functions only positive
 *@a: is a ls of the list of arguments
 * Return: 1 for add
 */
int print_numbers_unsig(int a)
{
	int count  = 0;
	long int b;

	if (a < 0)
	{
		count += _putchar('-');
		b = -a;
		if (a == INT_MIN)
		{
			b = (long int)1 + INT_MAX;
		}
	}
	return print_numbers(b);
}
