#include "main.h"

/**
  * _default - A functiong to default swithc case
  * @spec: Pointer to achar
  * @count: Index
  */
void _default(const char *spec, int count)
{
	_putchar('%');
	_putchar(*spec);
	count += 2;
}
