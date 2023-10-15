#include "main.h"

#include "main.h"

/**
 * print_bin - recursively prints number in binary
 * @n: number to print
 * Return: no. of characters printed
 */

int print_bin(unsigned int n)
{
	int binary;
	int total = 0;

	if (n == 0)
	{
		print_chr('0');
		return (1);
	}

	while (n >= 1)
	{
		total = print_bin(n / 2);
	}

	binary = (total + print_chr(n % 2) + '0');
	return (binary);
}
