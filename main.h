#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int switch_specifier(const char *spec, int count, va_list args);
int _print_i(va_list args, int count);
int print_rev(char *s);
#endif
