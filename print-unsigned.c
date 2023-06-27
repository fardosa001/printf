#include "main.h"

/**
 * printUnsigned - Prints unsigned int.
 * @ap: Arguments
 * Return: number of characters printed
 */
int printUnsigned(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int num_chars = 0, divider = 1;
	unsigned int new_num = num;

	while (new_num / divider > 9)
	{
		divider *= 10;
	}
	while (divider != 0)
	{
		num_chars = num_chars + _putchar(new_num / divider + '0');
		new_num = new_num % divider;
		divider = divider / 10;
	}
	return (num_chars);
}
