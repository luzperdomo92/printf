#include "holberton.h"
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
 *@a: is a ls of the list of arguments
 * Return: 1 for add
 */

int print_numbers(int a)
{

	int count  = 0;

	if (a < 0)
	{
		putchar('-');
		a = -a;
		count++;
	}
	if (a / 10)
	{
		count = print_numbers(a / 10);

		putchar((a % 10) + '0');
	}
	else
	{
	    count++;
	    putchar(a + '0');
	}

	return (count + 1);
}
