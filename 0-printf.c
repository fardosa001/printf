#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * _printf - produces output according to a format.
 * @format: argument
 * Return: number of charcters printed without null byte
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int numchars = 0;

	va_start(ap, format);

	while (format != '\0')

	{
		if (format[i] == %)

		{
			switch (format[i] + 1)
			{
				case 'c';
				numchars = numchar + _print_char(ap);
				break;
				case 's';
				numchars = numchars + _print_string(ap);
				break;
				default;
				break;

			{

			write(0, format[i], sizof(char));
			numchars++;
			i++;

			}

		va_end(ap, format);


		return (numchars);
}

