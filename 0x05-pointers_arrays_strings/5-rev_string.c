#include "main.h"
/**
*rev_string - a functio that Reverses a string
*@s: String to be reversed
*Return: always returns 0
*/
void swap_char(char *a, char *b);
void rev_string(char *s)
{
int j = 0, len;
len = _strlen(s) - 1;
while (len > j)
{
swap_char(s + len, s + j);
j++;
len--;
}
}

/**
 *_strlen - afunction that  returns the length of a string
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

/**
*swap_char - a function that swaps two characters
*@a: first character
*@b: second character
*Return: always returns nothing
*/

void swap_char(char *a, char *b)
{
char tm = *a;
*a = *b;
*b = tm;
}
