#include "main.h"
/**
 * _print_string - prints a string
 * @ap: arguments
 * Return: int
 */
int _print_string(va_list ap)
{
	char *str = va_arg(ap, char*);
	int lenstr = 0;

	if (str == NULL)
		str = "(null)";
	if (str[0] == '\0')
		return (-1);
	lenstr = _strlen(str);

	return (write(1, str, lenstr));
}
