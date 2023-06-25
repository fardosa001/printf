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
		write(1, &c, 1);
		return (1);
	}
	return (0);
}
