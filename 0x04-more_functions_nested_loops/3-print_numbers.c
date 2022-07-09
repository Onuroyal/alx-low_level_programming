#include "main.h"

/**
* print_numbers - prints numbers between 0 to 9.
* Return: 0.
*/

void print_numbers(void)
{
int num;
num = 48;
while (num <= 57)
{
_putchar('0' + num);
num++;
}
_putchar('\n');
}
