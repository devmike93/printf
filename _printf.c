#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - print any type of variable
 * @fmt: is a character string
 * Return: the number of characters printed
 **/

int _printf(const char *fmt, ...)
{
	int total = 0;
	va_list list;


	va_start(list, fmt);
	while (*fmt != '\0')
	{
		if (*fmt == '%' && *(fmt + 1) != NULL)
			total += get_conv(fmt, list);
		else
		{
			total += print_chr(*fmt);
		}
		++fmt;
	}
	va_end(list);
	return (total);
}
