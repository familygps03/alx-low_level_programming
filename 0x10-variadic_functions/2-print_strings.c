#include "variadic_functions.h"

/**
* print_strings - prints strings
*@separator: separator
*@n: number of strings
*
*Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{

va_list lu;
unsigned int a;
char *str;

va_start(lu, n);

for (a = 0; a < n; a++)
{
str = va_arg(lu, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (a != (n - 1) && separator != NULL)
printf("%s", separator);

}

printf("\n");
va_end(lu);
}
