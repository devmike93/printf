#include "main.h"
#include <unistd.h>
/**
 * print_str - prints a string to standard output
 * using write function
 * @fmt: format string to be printed
 * Return: total no. of characters printed
 */

int print_str(char *fmt)
{
	int total = 0;

	fmt = (fmt == NULL) ? "(null)" : fmt;

	while (*fmt != '\0')
	{
	total += print_chr(*fmt);
	++fmt;
	}
	return (total);
}
