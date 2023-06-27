#include "main.h"
/**
 * _print_string - prints a string
 * @ap: arguments
 * Return: int
 */
int _print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int lenstr;

	lenstr = 0;
	while (str[lenstr] != '\0')
	{
		lenstr = lenstr + _putchar(str[lenstr]);
	}
	return (lenstr);
}
