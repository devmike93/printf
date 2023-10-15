#include "main.h"

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
	case 'b':
		total += print_bin(va_arg(list, unsigned int));
		break;
	default:
		total += print_bin('%');
		total += print_bin(fmt);
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
			total += print_bin(*fmt);
		break;
		}
		++fmt;
	}
	va_end(list);
	return (total);
}
