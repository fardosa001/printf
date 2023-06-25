#include "main.h"
/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 * Return: the number of characters printed without null byte.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	char new_line = '\n';
	op_t op[] = {
	{'c', _print_char},
	{'s', _print_string},
	{'\0', NULL}
	};
	int i = 0, j = 0, num_chars = 0;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 0;
			while (op[j].c != '\0')
			{
				if (format[i + 1] == op[j].c)
				{
					num_chars += op[j].f(ap);
					i += 2;
				}
				j++;
			}
			if (format[i + 1] == '%')
			{
				num_chars += _print_percent();
				i += 2;
			}
		}
		num_chars += cont_print(format[i]);
		i++;
	}
	va_end(ap);
	write(1, &new_line, 1);
	return (num_chars);
}
