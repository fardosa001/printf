#include "main.h"
/**
 * _putchar - prints a char
 * @c: character to be printed.
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
