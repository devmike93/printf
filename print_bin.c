#include "main.h"

#include "main.h"

/**
 * print_bin - print number in binary
 * @n: number to print
 * Return: no. of characters printed
 */

int print_bin(unsigned int n)
{
	int binary;
	int count = 0;
	int binaryNum[32];
	int i = 0;

	if (n == 0)
	{
		print_chr('0');
		return (1);
	}

	while (n >= 1)
	{
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;

		count = binaryNum[i];
	}

	binary = (count + print_chr(n % 2) + '0');
	return (binary);
}
