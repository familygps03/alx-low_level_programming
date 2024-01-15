/**
* _atoi - changes a string to an int
* @s: the string to be changed
*
* Return: the changed int
*/
int _atoi(char *s)
{
int j = 1;
unsigned int digit = 0;
do {
if (*s == '-')
j *= -1;
else if (*s >= '0' && *s <= '9')
digit = digit * 10 + (*s - '0');
else if (digit > 0)
break;
} while (*s++);
return (digit *j);
}
