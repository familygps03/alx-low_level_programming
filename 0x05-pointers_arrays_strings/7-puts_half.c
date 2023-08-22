#include "main.h"
/**
*puts_half - a functions that  puts half of a string
*@str: string
*Return:void
*/
void puts_half(char *str)
{
int length = _strlen(str);

if (length % 2 == 0)
length = length / 2;

else
length = (length + 1) / 2;

while (str[length] != '\0')
{
_putchar(str[length]);
length++;
}
_putchar('\n');
}


/**
 *_strlen - a function that prints the length of a string
 * @s: string
 *Return: returns length;
 */
int _strlen(char *s)
{
int tally, i;
i = 0;
for (tally = 0; s[tally] != '\0'; tally++)
i++;

return (i);
}
