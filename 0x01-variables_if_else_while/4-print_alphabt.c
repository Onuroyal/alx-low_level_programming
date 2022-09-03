#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Print all the letters except q and e,
 * folloowed by a new line.
 * Return: Always 0 (success)
 */

int main(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}

	}
	putchar('\n');
	return (0);
}
