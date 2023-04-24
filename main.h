#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_char(va_list args);
int switch_specifier(const char *spec, int count, va_list args);
void _default(const char *spec, int count);
#endif
