#include <stdio.h>
/**
*main - prints out first 50
*fibonacci suit numbers
*Return: return 0
*/
int main(void)
{
int digit;
unsigned long n1 = 0, n2 = 1, n3;
for (digit = 0; digit < 50; digit++)
{
n3 = n1 + n2;
printf("%lu", n3);
n1 = n2;
n2 = n3;

if (digit == 49)
printf("\n");
else
printf(", ");

}

return (0);
}
