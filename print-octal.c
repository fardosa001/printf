#include "main.h"

/**
 * printOctal - prints octal
 * @ap: argument
 * Return: Number divided.
 */
int printOctal(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int num_divided = 0;
	unsigned int holder = num;
	int *ptr, i = 0;

	while (num / 8 > 0)
	{
		num /= 8;
		num_divided++;
	}
	ptr = malloc(num_divided * sizeof(*ptr));
	if (ptr == NULL)
		return (0);

	while (i < num_divided)
	{
		ptr[i] = holder % 8,
			holder /= 8;
		i++;
	}
	for (i = num_divided - 1; i >= 0; i--)
	{
		_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (num_divided);
}
