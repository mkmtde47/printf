#include "main.h"

/**
  * switch_specifier - A function to switch case
  * @spec: Pointer to a char
  * @count: Index
  * @args: Pointer to a variadic function
  * Return: Count
  */
int switch_specifier(const char *spec, int count, va_list args)
{
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
