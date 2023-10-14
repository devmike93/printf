#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *fmt, ...);
int get_flags(const char fmt, va_list list);
int print_string(char *string);
int print_bin(unsigned int n);

#endif
