#include "main.h"

/**
 * get_conv - chooses which conversion function to use
 * according to the formatmt
 * @fmt: character string
 * @list: list of arguments
 * Return: number of charachters printed
 */
int get_conv(const char *fmt, va_list list)
{
	int total = 0;

	if (fmt != NULL)
	{
		switch (*fmt)
		{
		case 'c':
			total = print_chr((char)va_arg(list, int));
			break;
		case 's':
			total = print_string(va_arg(list, char *));
			break;
		case '%':
			total += print_chr(*fmt);
			break;
		case 'd':
		case 'i':
			total += print_int((long)va_arg(list, int));
			break;
		case 'b':
			total += print_bin(va_arg(list, unsigned int));
			break;
		default:
			total += print_chr('%');
			total += print_chr(fmt);
			break;
		}
	}
return (total);
}
