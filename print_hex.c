#include "main.h"

/**
 * printHexalow - prints lowercase hexa
 * @ap: arguments
 * Return: number of char  printed
 */
int printHexalow(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int num_divided = 0;
	unsigned int holder = num;
	int *ptr, i = 0;

	while (num / 16 > 0)
	{
		num /= 16;
		num_divided++;
	}
	num_divided++;
	ptr = malloc(num_divided * sizeof(*ptr));
	if (ptr == NULL)

		return (0);

	while (i < num_divided)
	{

		ptr[i] = holder % 16;
		holder /= 16;
		i++;
	}

	for (i = num_divided - 1; i >= 0; i--)
	{
	if (ptr[i] >= 10)
	_putchar(ptr[i] + 87);
	else
	_putchar(ptr[i] + '0');
	}
	free(ptr);

	return (num_divided);
}

/**
 * printHexaup - prints - prints uppercase hexa
 * @ap: arguments
 * Return: 0
 */
int printHexaup(va_list ap)
{
	unsigned int num = va_arg(ap, unsigned int);
	int num_divided = 0;
	unsigned int holder = num;
	int *ptr, i = 0;

	while (num / 16 > 0)
	{
		num /= 16;
		num_divided++;
	}
	num_divided++;
	ptr = malloc(num_divided * sizeof(*ptr));
	if (ptr == NULL)
		return (0);

	while (i < num_divided)
	{
		ptr[i] = holder % 16;
		holder /= 16;
		i++;
	}

	for (i = num_divided - 1; i >= 0; i++)
	{
		if (ptr[i] >= 10)
			_putchar(ptr[i] + 87);
		else
			_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (num_divided);
}



