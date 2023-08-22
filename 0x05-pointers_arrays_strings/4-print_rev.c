#include "main.h"
/**
* print_rev - a function that  prints a string in reverse
* @s: string to be printed
*/

void print_rev(char *s)
{
int length = 0, i = 0;
length = _strlen(s);

for (i = length - 1; i >= 0; i--)
_putchar(s[i]);

_putchar('\n');
}

/**
 *_strlen - a function that returns the length of a string
 * @s: string
 *Return: returns length;
 */
int _strlen(char *s)
{
int tally, j;
j = 0;
for (tally = 0; s[tally] != '\0'; tally++)
j++;

return (j);
}
