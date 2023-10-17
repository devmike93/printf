#include "main.h"

/**
 * print_addr - address printer
 * @addr: address to print
 * Return: total no. of printed characters
 */

int print_addr(void *addr)
{
	unsigned long int n = (unsigned long int)addr;

	return (print_str("0x") + print_hexadec(n, 'x'));
}

