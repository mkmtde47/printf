#include "main.h"
#include <stdio.h>

int main() {
    printf("Should return -1: %d\n", _printf(NULL));

   printf("Should return 0: %d\n", _printf(""));

    printf("Should print 'Printing an unknown specifier: %z\n' and return 36: ");
    _printf("Printing an unknown specifier: %z\n");

    printf("Should print 'Printing a percent sign: %\n' and return 29: ");
    _printf("Printing a percent sign: %%\n");

    printf("Should print 'hello\\nworld' and return 11: ");
    _printf("hello\nworld");

    return 0;
}
