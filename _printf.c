#include "main.h"

/**
 * _printf - implementation of printf function
 * @format: a string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	Formatter formatters[] = {
		{'c', print_char},
		{'s', print_string},
		{'%', print_default}
	};
	va_list args;
	int count = 0;
	unsigned int i;

	va_start(args, format);
<<<<<<< HEAD
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return -1;
	while (*format) {
=======
	if (format == NULL)
		return (-1);
	while (*format)
	{
>>>>>>> parent of 7673574... 7 returns
		if (*format == '%')
		{
			format++;
			for (i = 0; i < sizeof(formatters) / sizeof(Formatter); i++)
			{
				if (formatters[i].specifier == *format)
				{
					count += formatters[i].handler(args);
					break;
				}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return count;
}
