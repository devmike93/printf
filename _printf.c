#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - print any type of variable
 * @format: is a character string
 * Return: the number of characters printed
 **/

int _printf(const char *format, ...)
{
	va_list list;
	int total = 0;

	char current_char;
	char next_char;

	va_start(list, format);
	while (1)
	{
		current_char = *format;
		next_char = *(format + 1);

		if (current_char == '\0')
		{
			break;
		}

		if (current_char == '%' && next_char != '\0')
		{
			total += get_conv((++format), list);
		}
		else
		{
			total += print_chr(current_char);
		}
		++format;
	}
	va_end(list);
	return (total);
}
