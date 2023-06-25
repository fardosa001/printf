#include "main.h"
/**
 * _print_percent - prints percent sign
 *
 * Return: number of characters printed
 */
int _print_percent(void)
{
	return (write(1, "%%", 1));
}
