#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 * Return: the number of characters printed without null byte.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char c;
	char new_line = '\n';

	op_t 0p[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'\0', NULL}
	};

	int i = 0, j = 0;
	int num_chars = 0;

	va_start(ap, format);
	while (format[i] != '%')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (op[j].c != '\0')
			{
			if (format[i + 1] == op[j].c)
			{
				num_chars = num_chars + op[j].f(ap);
				i++;
			}
			j++;
		}
	}
		else
		{
			c = format[i];
			write(1, &c, 1);
			num_chars++;
		}
		i++;
	}
	va_end(ap);
	write(1, &new_line, 1);
	return (num_chars);
}