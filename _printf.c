#include "main.h"
#include <stdio.h>
/**
 * _printf - implementation of printf function
 * @format: a string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int count;
	int vlag;

	va_start(args, format);

	vlag = 0;
	count = 0;
	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			count++;
			format++;
			if (*format == '%')
				vlag = 1;
			switch_specifier(format, count, args);
		}
		else
		{
			_putchar(*format);
		}
		format++;
		count++;
	}
	printf("count: %d\n", count);
	va_end(args);
	if (vlag)
		count--;
	return (count);
}
