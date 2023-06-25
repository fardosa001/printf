#include "main.h"
/**
 * check_for_error - Checks for error
 * @format: parameter
 *
 * Return: void
 */
void check_for_error(const char *format)
{
	int i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1])
			exit(98);
		i++;
	}
}
