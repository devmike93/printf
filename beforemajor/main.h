#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/*function prototypes*/
int _printf(const char *format, ...);
int get_conv(const char *fmt, va_list list);
int print_str(char *fmt);
int print_chr(int fmt);
int print_dec(va_list args);
int print_recint(long int num, int *cnt);
int print_bin(unsigned int n);

#endif /* MAIN_H*/
