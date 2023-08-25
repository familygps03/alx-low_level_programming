#include "main.h"
#include <stdio.h>
/**
*print_buffer -  C function that prints the content of an
*  inputted number of bytes from a buffer.
* Prints 10 bytes per line.
* Starts with the position of the first byte in hexadecimal (8 chars),
* starting with `0`.
* Each line shows the hexadecimal content (2 chars) of the buffer,
* 2 bytes at a time, separated by a space.
* Each line shows the content of the buffer.
* Prints the byte if it is printable; if not, prints `.`.
* Each line ends with a new line `\n`.
* If the inputted byte size is 0 or less, the function only prints a new line.
*@b: number of bytes
*@size: size of the byte
*/
void print_buffer(char *b, int size)
{
	int count = 0, inc;

	if (size < 0)
	{
		printf('\n');
		return;
	}

	while (count < size)
	{
		if (count % 10 == 0)
			printf("%08x: ", count);
		for (inc = count; inc < count + 9; inc += 2)
		{
			if ((inc < size) && ((inc + 1) < size))
				printf("%02x%02x: ", b[inc], b[inc + 1]);
			else
			{
				while (++inc <= count + 10)
					printf(" ");
				printf(" ");
			}
		}
		for (inc = count; inc < count + 9 && inc < size; inc++)
		{
			if (b[inc] >= 32 && b[inc] <= 126)
				printf("%c", b[inc]);
			else
				printf(".");
		}
		printf('\n');
		count += 10;
	}
}
