#include "main.h"

/**
 * print_int - prints an integer recursively
 * @num: integer to print
 * Return: integer
 */
void print_int(int num)
{
	int c = num;

	if (num < 0)
	{
		print_chr('-');
		num = -num;
	}

	if (num > 9)
		print_int(num / 10);

	print_chr('0' + (c % 10));
}
