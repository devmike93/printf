#include "main.h"
/**
 * print_unsigned - format string as unsigned number
 * @num: digit/sting to format
 * Return: total no. of unsigned numbers
 */

int print_unsigned(unsigned int num)
{
	int total = 0;

	int digits[10];

	int i = 0;

	do {
		digits[i++] = num % 10;
		num /= 10;
	} while (num > 0);

	while (--i >= 0)
		total += print_chr(digits[i] + '0');

	return (total);
}
