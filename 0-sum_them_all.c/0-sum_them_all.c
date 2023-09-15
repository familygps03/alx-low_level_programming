#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{

va_list lu;
int sum = 0;
unsigned int a;

va_start(lu, n);

if (n != 0)
{
for (a = 0; a < n; a++)
sum += va_arg(lu, int);
}

va_end(lu);
return (sum);

}
