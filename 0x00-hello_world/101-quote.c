#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * return: always 1 (Error)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-1019\n", 59);
	return (1);
}
