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
	int j;
	int temp;
	char *str;

	num = va_arg(args, int);
	temp = 0;
	j = 0;
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
	while (num != 0)
	{
		temp = num % 10;
		num = num / 10;
		*(str + j) = temp + '0';
		j++;
	}
	print_rev(str);
	free(str);
	return (count);
}
