#include "main.h"

/**
  * switch_specifier - A function to switch case
  * @spec: Pointer to a char
  * @args: Pointer to a variadic function
  * Return: Count
  */
int switch_specifier(const char *spec, va_list args)
{
	int count = 0;

	switch (*spec)
	{
		case 'c':
			count += print_char(args);
		break;
		case 's':
			count += print_string(args);
		break;
		case '%':
			_putchar('%');
			count++;
		break;
		case 'd':
			count += _print_i(args, count);
		break;
		case 'i':
			count += _print_i(args, count);
		break;
		default:
			_putchar('%');
			_putchar(*spec);
			count += 2;
		break;
	}
	return (count);
}
