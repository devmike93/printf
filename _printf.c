#include "main.h"

/**
 * _printf - Print any type of variable
 * @format: A character string containing format specifiers
 * 
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
	int total = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			total++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				total++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(list, int);
				write(1, &c, 1);
				total++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;

				write(1, str, str_len);
				total += str_len;
			}
		}

		format++;
	}

	va_end(list);

	return (total);
}
