#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*string_nconcat - Concatenates two strings using at
*most an inputted number of bytes.
*@s1: The first string.
*@s2: The second string.
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1leng = 0;
	unsigned int s2leng = 0;
	unsigned int i;
	char *conc_out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		s1leng++;
	for (i = 0; s2[i]; i++)
		s2leng++;

	conc_out = malloc(sizeof(char) * (s1leng + n) + 1);
	if (conc_out == NULL)
	return (NULL);
	if (i >= s2leng)
	{
		for (i = 0; s1[i]; i++)
			conc_out[i] = s1[i];
		for (i = 0; s2[i]; i++)
			conc_out[s1leng + i] = s2[i];
		conc_out[s1leng + i] =  '\0';
	}

	else
	{
	for (i = 0; s1[i]; i++)
		conc_out[i] = s1[i];
	conc_out[i] = '\0';
	for (i = 0; i < n; i++)
		conc_out[s1leng + i] = s2[i];
	conc_out[s1leng + i] = '\0';
	}
	return (conc_out);
}

