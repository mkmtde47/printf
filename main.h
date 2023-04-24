#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

typedef struct {
	char specifier;
	int (*handler)(va_list);
} Formatter;
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int print_default(va_list args);
#endif
