#include "main.h"
/**
*_isupper - function that checks if a  character is uppercase or not
*@c: character to be checked
*Return: returns 1 if it is uppercase ,returns 0 if not
*/

int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else

return (0);
}
