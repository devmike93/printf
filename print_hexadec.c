#include "main.h"

/**
 * print_hexadec - formats headecimal integer
 * @num: integer to format
 * @fmt: format
 * Return: No. of integers printed
 */

int print_hexadec(unsigned int num, char fmt)
{
	char *arr_sym = (fmt == 'x') ? "0123456789abcdef" : "0123456789ABCDEF";
	int total;

	if (num < 16)
	{
		return (print_chr(arr_sym[num]));
	}

	total = print_hexadec(num / 16, fmt);

	return (total + print_chr(arr_sym[num % 16]));
}
