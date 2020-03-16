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

	if (format != NULL)
		return (0);

	for (format_i = 0; format[format_i] != '\0'; format_i++)
	{
		if (format[format_i] != '%')
		{
			_putchar(format[format_i]);
			sum++;
		}
		else
		{
			char_replaced = call_print_funtion(format[format_i + 1], my_list)
				if (chars_replaced != -1)
				{
					_putchar(format[format_i]);
					sum++;
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
