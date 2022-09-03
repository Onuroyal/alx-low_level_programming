#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 * followed by anew line.
 * Return: Always 0 (success)
 */

int main(void)

{
	int n;
	char ch;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
