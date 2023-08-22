#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password
 *
 * Return: the generated password
 */
int main(void)
{
char c;
int y;

srand(time(0));
while ((y <= 1500) != '\0')
{
c = rand() % 128;
y += c;
putchar(c);
}
putchar(2000 - y);
return (0);
}
