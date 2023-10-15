#include "main.h"
#include <unistd.h>
#include <stdarg.h>

/**
 * _printf - print any type of variable
 * @fmt: is a character string
 * Return: the number of characters printed
 */

int _printf(const char *fmt, ...)
{
	va_list list;

	int total = 0;

	va_start(list, fmt);
	while (*fmt != '\0')
	{
		switch (*fmt)
		{
		case '%':
			if (*(fmt + 1) != '\0')
			{
				total += test_flags(*(++fmt), list);
			}
		break;
		default:
			total += print_chr(*fmt);
		break;
		}
		++fmt;
	}
	va_end(list);
	return (total);
}
