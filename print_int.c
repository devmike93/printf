#include "main.h"
#include <unistd.h>
/**
 * print_int - print integer
 * @n: integer to print
 * Return: number of int printed
 */

int print_int(long int n)
{
	int count;

	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}

	if (n < 10)
		return (print_char(n + '0'));
	else
	{
		count = print_int(n / 10);
		return (count + print_int(n % 10));
	}
}
