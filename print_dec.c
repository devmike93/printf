#include "main.h"

/**
 * print_dec - prints an integer recursively
 * @num: integer to print
 * Return: integer
 */
int print_dec(long int num)
{
	int total;

	if (num < 0)
	{
		print_chr('-');
		num = -num;
	}
	else if (num > 9)
	{
		total = print_dec(num / 10);
		return ((total + print_dec(num % 10)));
	}
	else
		return (print_chr(num + '0'));
}
