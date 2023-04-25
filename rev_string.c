#include "main.h"

/**
 * print_rev - Prints a strngi in reverse
 * @s: String to be printed
 */
int print_rev(char *s)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	while (i > -1)
	{
		if (*(s + i) != '\0')
		{
			_putchar(*(s + i));
			count++;
		}
		i--;
	}
	return (count);
}
