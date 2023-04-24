#include "main.h"

int print_default(va_list args)
{
	char c = va_arg(args, int);
	_putchar('%');
	_putchar(c);
	return 2;
}
