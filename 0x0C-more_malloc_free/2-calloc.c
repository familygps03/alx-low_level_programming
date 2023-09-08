#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: poiner to the address of the memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memo_out;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memo_out = calloc(nmemb, size);
	if (memo_out == NULL)
		return (NULL);
	else
		return (memo_out);

}
