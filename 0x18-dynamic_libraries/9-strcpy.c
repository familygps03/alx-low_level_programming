#include "main.h"
/**
* _strcpy - a function to Copy paste string
*@dest: destination
*@src: source
*Return: returns dest
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (*(src + i) != '\0')
{
*(dest + i) = *(src + i);
i++;
}
*(dest + i) = '\0';
return (dest);
}
