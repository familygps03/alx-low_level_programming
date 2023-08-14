#include<stdio.h>
#include<unistd.h>
/**
 * main - this is the main function
 * Return: 0 (success)
 */

int main(void)
{
	 char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	 write(2, message, 83);

	return (1);
}
