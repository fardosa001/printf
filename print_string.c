#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * _print_string - prints a character string.
 * @ap: argument parameters
 * Return: 0.
 */
int _print_string(va_list ap)
{
	char *str = va_list(ap, char *);
	int lenstring = strlen(str);
	int i = 0;

	while (i < lenstring)
	{
		write(0, str[i], sizeof(char));
		i++
	}

	return (lenstring);
}
