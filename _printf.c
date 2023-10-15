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
	int total = 0;
	va_list list;


	va_start(list, format);
	while (*format != '\0')
	{
		if (*format == '%' && *(format + 1) != NULL)
			total += get_conv(format, list);
		else
		{
			total += print_chr(*format);
		}
		++format;
	}
	va_end(list);
	return (total);
}
