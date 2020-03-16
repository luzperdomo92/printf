#include "holberton.h"
/**
 * _printf - produces output according to a format.
 * @format: variable type char
 * Return: value of _printf
 */
int _printf(const char *format, ...)
{
	int format_i;
	int sum = 0;
	int chars_replaced;
	va_list my_list;

	va_start(my_list, format);

	if (format == NULL)
		return (-1);

	for (format_i = 0; format[format_i] != '\0'; format_i++)
	{
		if (format[format_i] != '%')
		{
			sum += _putchar(format[format_i]);
		}
		else
		{
			chars_replaced = call_print_function(format[format_i + 1], my_list);

				if (chars_replaced == -1)
				{
					return (chars_replaced);
				}
				else
				{
					sum += chars_replaced;
					format_i++;
				}
		}
	}
	va_end(my_list);
	return (sum);
}
