#include "main.h"
#include <stdlib.h>
/**
* argstostr - a function that concatenates all the arguments of your program
*@ac: count of args passed to the function
*@av:array of arguments
*
*Return: pointer to the new string
*/

char *argstostr(int ac, char **av)
{
		char *output = NULL;
		int k = 0, i = ac, j, sum = 0, temp = 0;

		if (ac == 0 || av == NULL)
			return (NULL);

		while (ac--)
			sum += (len(av[ac]) + 1);
		output = (char *) malloc(sum + 1);

		if (output != NULL)
		{
			while (k < i)
			{
				for (j = 0; av[k][j] != '\0'; j++)
					output[j + temp] = av[k][j];
				output[temp + j] = '\n';
				temp += (j + 1);
				k++;
			}
			output[temp] = '\0';
		}
		else
		{
			return (NULL);
		}
		return (output);
}

/**
*len - returns length of str
*@str: string counted
*Return: returns the length
*/
int len(char *str)
{
		int len = 0;

		if (str != NULL)
		{
			while (str[len])
				len++;
		}
	return (len);
}
