#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line.
 * Return: Away 0 (success)
 */

int main(void)

{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
	putchar(ch);
	}

	putchar('\n');

	return (0);

}

