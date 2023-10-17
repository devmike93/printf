#include "main.h"
#include <unistd.h>

/**
 * print_chr - prints a single character to
 * standard output using write
 * @fmt: character to print
 * Return: total no. of char printed to stdo
 */

int print_chr(int fmt)
{
	return (write(1, &fmt, 1));
}
