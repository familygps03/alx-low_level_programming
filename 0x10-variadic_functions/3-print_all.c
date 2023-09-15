#include "variadic_functions.h"

/**
 * print_all - function that prints anything.
 * @format: a list of types of arguments passed to the function:
 * c: integer, i: integer, f:float, s:char *
 *
 * any other char should be ignored.
 *
 * You are not allowed to use for, goto, ternary operator, else
 * do ... while.
 * You can use a maximum of 2 while loops and 2 if.
 * You can declare a maximum of 9 variables.
 * You are allowed to use printf.
 * Print a new line at the end of your function.
 *
 * Return: no return.
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *separator = "";

	va_list data;

	va_start(data, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", separator, va_arg(data, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(data, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(data, double));
					break;
				case 's':
					str = va_arg(data, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					a++;
					continue;
			}
			separator = ", ";
			a++;
		}
	}

	printf("\n");
	va_end(data);
}
