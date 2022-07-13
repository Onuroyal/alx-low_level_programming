#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 * Return: returns the value of the string length
 */

int _strlen(char *s)

{
int counter;
counter = 0;
while (*(s + counter) != '\0')
{
/**printf("%c",*(s + counter));**/

counter++;
}
return (counter);
}
