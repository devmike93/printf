#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/
int _printf(const char *fmt, ...);
int get_conv(const char fmt, va_list list);
int print_str(char *fmt);
int print_chr(int fmt);
int print_bin(unsigned int n);

#endif
