#include "main.h"

/**
* str_concat - a function that concatenates two strings.
*@s1:First string
*@s2:Second string
*
*Return: NULL in case of failure , but pointer to new string in
*case of success
*/

char *str_concat(char *s1, char *s2)
{
	char *output;
	int i,  s1len = 0, s2len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i];  i++)
		s1len++;
	for (i = 0; s2[i];  i++)
		s2len++;

	output = malloc(sizeof(char) * (s1len + s2len) + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		output[i] = s1[i];

	for (i = 0; s2[i]; i++)
		output[s1len + i] = s2[i];

	return (output);
}
