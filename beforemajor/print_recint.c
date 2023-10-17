#include "main.h"

/**
 * print_recint - prints an integer recursively
 * @num: integer to print
 * @cnt: counter
 * Return: integer
 */

int print_recint(long int num, int *cnt)
{
	if (num < 0)
	{
		num = -num;
		print_chr('-');
		++(*cnt);
	}
	if (num / 10)
		print_recint((num / 10), cnt);
	++(*cnt);
	print_chr((num % 10) + '0');
	return (*cnt);
}
