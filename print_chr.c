#include "main.h"
#include <unistd.h>

/**
 * print_chr - prints a single character to
 * standard output using write
 * @chr: character to print
 * Return: total no. of char printed
 */

int print_chr(int chr)
{
	return (write(1, &chr, 1));
}
