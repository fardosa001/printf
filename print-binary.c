#include "main.h"

/**
 * printBin - prints an int converted to binary.
 * @ap: arguments
 * Return: number of digits printed
 */
int printBin(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int num_divided = 0;
	unsigned int holder = num;
	int *ptr, i = 0;

	while (num > 0)
	{
		num /= 2;
		num_divided++;
	}

	num_divided += 1;
	ptr = malloc(num_divided * sizeof(*ptr));
	if (ptr == NULL)
	{
		return (0);
	}

	while (i < num_divided)
	{
		ptr[i] = holder % 2;
		holder /= 2;
		i++;
	}
	for (i = num_divided - 1; i >= 0; i--)
	{
		_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (num_divided);
}
