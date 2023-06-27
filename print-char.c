#include "main.h"

/**
 * _print_char - prints a character
 * @ap: arguments
 *
 * Return: int
 */
int _print_char(va_list ap)
{
	char c = va_arg(ap, int);

	if (c != '\0')
	{
		return (_putchar(c));
	}
	return (0);
}
