#include "main.h"
/**
 * _print_string - prints a string
 * @ap: arguments
 * Return: int
 */
int _print_string(va_list ap)
{
	int i = 0;
	char c;
	char *str = va_arg(ap, char*);
	int lenstr = 0;

	if (str == NULL)
		str = "(null)";
	lenstr = _strlen(str);
	while (i < lenstr)
	{
		c = str[i];

		write(1, &c, 1);
		i++;
	}
	return (lenstr);
}
