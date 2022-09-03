#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * followed by a new line.
 * Return: always 0 (success).
 */

int main(void)

{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch); /* ASCII code for new line */
	}
	putchar('\n');
	return (0);

}
