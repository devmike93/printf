#include "main.h"
#include <unistd.h>
/**
 * print_string - prints a string to standard output
 * using write function
 * @string: string to be printed
 * Return: total no. of characters printed
 */

int print_string(char *string)
{
	int total = 0;

	string = (string == NULL) ? "(null)" : string;

	while (*string != '\0')
	{
	total += write(1, string, 1);
	++string;
	}
	return (total);
}
