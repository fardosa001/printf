#include "main.h"

/**
 * _print_int - prints an integer
 * @ap: arguments
 * Return: int
 */
int _print_int(va_list ap)
{
	int num, divider = 1, num_chars = 0;
	unsigned int new_num;

	num = va_arg(ap, int);

		if (num < 0)
		{

		num_chars = num_chars + _putchar('-');
		new_num = num * -1;

		}

		else
		new_num = num;
		while (new_num / divider > 9)
		divider *= 10;

		while (divider != 0)
		{
			num_chars = num_chars + _putchar(new_num / divider + '0');
			new_num = new_num % divider;
			divider = divider / 10;
		}

		return (num_chars);
}
