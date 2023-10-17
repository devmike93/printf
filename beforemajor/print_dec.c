#include "main.h"

/**
 * print_dec - prints an integer
 * @args: args
 * Return: printed characters/decimals
*/

int print_dec(va_list args)
{
	int num = 0;
	long int dec = va_arg(args, int);
	int total = print_recint(dec, &num);
	return (total);
}
