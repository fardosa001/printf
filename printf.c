#include "main.h"
int check_spec(const char *format, va_list ap, op_t *op);
/**
 * _printf - produces output according to a format.
 * @format: a character string composed of zero or more directives.
 * Return: the number of characters printed without null byte.
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int num_chars = 0;

	op_t op[] = {
		{"c", _print_char},
		{"s", _print_string},
		{"i", _print_int},
		{"d", _print_int},
		{"b", printBin},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	num_chars = check_spec(format, ap, op);
	va_end(ap);
	return (num_chars);
}

/**
 * check_spec - checks for specifier
 * @format: first param
 * @ap:second param
 * @op: third param
 *
 * Return: int
 */
int check_spec(const char *format, va_list ap, op_t *op)
{
	char letters;
	int num_char = 0;
	int i = 0, j = 0;

	letters = format[i];
	while (letters != '\0')
	{
		if (letters == '%')
		{
			j = 0;
			i++;
			letters = format[i];
			while (op[j].c != NULL && letters != *(op[j].c))
			{
				j++;
			}
			if (op[j].c != NULL)
			{
				num_char = num_char + op[j].f(ap);
			}
			else
			{
				if (letters == '\0')
				{
					return (-1);
				}
				if (letters != '%')
					num_char += _putchar('%');
				num_char += _putchar(letters);
			}
		}
		else
		{
			num_char += _putchar(letters);
		}
		i++;
		letters = format[i];
	}
	return (num_char);
}
