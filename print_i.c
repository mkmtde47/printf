#include "main.h"

/**
  * _print_i - A function that prints int %i
  * @args: Variadic function pointer
  * @count: Integer
  * Return: Count
  */
int _print_i(va_list args, int count)
{
	int num;
	char *str;

	num = va_arg(args, int);
	str = malloc(sizeof(int));
	if (str == NULL)
	{
		free(str);
		return (-1);
	}
	if (num < 0)
	{
		num = -1 * num;
		_putchar('-');
	}
	if (num / 10)
	{
		count += shift_int(num / 10);
	}
	_putchar(num % 10 + '0');
	count++;
	/*print_rev(str);
	free(str);*/
	return (count);
}

/**
 * shift_int - Recursion function
 * @number: integer
 * Return: Count
 */
int shift_int(int number)
{
	int count;

	count = 0;
	if (number / 10)
	{
		count += shift_int(number / 10);
	}
	_putchar(number % 10 + '0');
	count++;
	return (count);
}
