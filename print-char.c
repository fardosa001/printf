#include "main.h"

/**
 * _print_char - prints a character
 * @ap: arguments
 *
 * Return: int
 */
int _print_char(va_list ap)
{
	return (_putchar(va_arg(ap, int)));
}
