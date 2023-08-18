#include <stdio.h>

/**
*main- prints the largest prime factor
*of a number
*
*Return: returns 0
*/

int main(void)
{
long number = 612852475143;
int digit;
for  (digit = 2; digit <= number / 2; digit++)
{
if (number % digit == 0)
{
number /= 2;
continue;
}

for (digit = 3; digit < number / 2; digit += 2)
{
if (number % digit == 0)
number /= digit;

}
}
printf("%ld\n", number);
return (0);
}
