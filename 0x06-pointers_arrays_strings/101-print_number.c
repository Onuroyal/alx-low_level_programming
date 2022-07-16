#include "main.h"

/**
 * print_number - prints an integer;
 * @n: integer to be printed;
 */

void print_number(int n)

{
unsigned int num = n
if (n < 0)

_putchar('-');
num = -num;
}
if ((num / 10) > 0)
print_numbe(num / 10)
_putchar((n1 % 10) + '0');
}
