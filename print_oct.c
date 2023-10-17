#include "main.h"

/**
 * print_oct - octal format of number
 * @num: number to print
 * Return: total of octal numbers printed
 */

int print_oct(unsigned int num)
{
	if (num < 8)
	{
		return (print_chr(num + '0'));
	}
	else
	{
		int count = print_oct(num / 8);

		return (count + print_chr(num % 8 + '0'));
	}
}
