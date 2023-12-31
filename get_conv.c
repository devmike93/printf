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
			total = print_str(va_arg(list, char *));
			break;
		case '%':
			total += print_chr('%');
			break;
		case 'd':
		case 'i':
			total += print_int(va_arg(list, int));
			break;
		case 'b':
			total += print_bin(va_arg(list, unsigned int));
			break;
		case 'u':
			total += print_unsigned(va_arg(list, int));
			break;
		case 'o':
			total += print_oct(va_arg(list, unsigned int));
			break;
		case 'x':
		case 'X':
			total += print_hexadec(va_arg(list, int), *fmt);
			break;
		case 'p':
			total += print_addr(va_arg(list, void *));
			break;
		default:
			total += print_chr('%');
			total += print_chr(*fmt);
			break;
		}
	}
return (total);
}
