#include "main.h"
/**
 *_strlen - a function that  returns the length of a string
 * @s: a  string
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
