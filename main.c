#include "main.h"
#include <stdio.h>
#include <limits.h>
int main() {
	int var;
    /* Test integer format specifier (%d)*/
    printf("Integer: %d\n", 42);
    printf("Negative integer: %d\n", -42);
    printf("Zero: %d\n", 0);
    printf("Maximum int value: %d\n", INT_MAX);
    printf("Minimum int value: %d\n", INT_MIN);

    /* Test character format specifier (%c)*/
    _printf("Character: %c\n", 'A');

    /* Test string format specifier (%s)*/
    _printf("String: %s\n", "Hello, world!");

    /* Test float format specifier (%f)*/
    printf("Float: %f\n", 3.14159);
    printf("Negative float: %f\n", -3.14159);

    /* Test hexadecimal format specifier (%x)*/
    printf("Hexadecimal: %x\n", 255);

    /* Test octal format specifier (%o)*/
    printf("Octal: %o\n", 255);

    /* Test pointer format specifier (%p)*/
    var = 42;
    printf("Pointer: %p\n", &var);
/* Test character format specifier (%c)*/
    _printf("Character: %c\n", 'A');

    /* Test string format specifier (%s)*/
    _printf("String: %s\n", "Hello, world!");
    _printf("NULL string: %s\n", NULL);
    return 0;
}

