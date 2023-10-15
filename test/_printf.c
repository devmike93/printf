#include "main.h"
#include <unistd.h>
#include <stdarg.h>
/**
 * test_flags - chooses which conversion function to use
 * according to the formatmt
 * @fmt: character string
 * @list: list of arguments
 * Return: number of charachters printed
 */
int test_flags(const char fmt, va_list list)
{
	int total = 0;

	switch (fmt)
	{
	case 'c':
		total = print_chr((char)va_arg(list, int));
		break;
	case 's':
		total = print_string(va_arg(list, char *));
		break;
	case '%':
		total += print_chr(fmt);
		break;
	case 'd':
	case 'i':
		total += print_int((long)va_arg(list, int));
		break;
	case 'x':
	case 'X':
		total += print_hex(va_arg(list, int), fmt);
		break;
	case 'u':
		total += print_uint(va_arg(list, unsigned int));
		break;
	case 'o':
		total += print_octal(va_arg(list, unsigned int));
		break;
	case 'p':
		total += print_add(va_arg(list, void *));
		break;
	case 'b':
		total += print_bin(va_arg(list, unsigned int));
		break;
	default:
		total += print_chr('%');
		total += print_chr(fmt);
		break;
}

return (total);
}

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
