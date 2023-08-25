#include "main.h"
/**
*cap_string - function that capitalize first character of a word
*@str: string to capitalize
*Return:returns the capitalized string
*/
char *cap_string(char *str)
{
	int num = 0;

	while (str[++num])
	{
		while (!(str[num] >= 'a' && str[num] <= 'z'))
			num++;

		if (str[num - 1] == ' ' ||
				str[num - 1] == '\t' ||
				str[num - 1] == '\n' ||
				str[num - 1] == ',' ||
				str[num - 1] == ';' ||
				str[num - 1] == '.' ||
				str[num - 1] == '!' ||
				str[num - 1] == '?' ||
				str[num - 1] == '"' ||
				str[num - 1] == '(' ||
				str[num - 1] == ')' ||
				str[num - 1] == '{' ||
				str[num - 1] == '}')
			str[num] -= 32;
	}
	return (str);
}
