#include "main.h"
/**
 * cont_print - continues to print characters if no specifier found
 * @c: character parameter
 *
 * Return: int
 */
int cont_print(char c)
{
	if (c != '\0' && c != '\n')
	{
		write(1, &c, 1);
		return (1);
	}
	if (c == '\n')
		write(1, &c, 1);
	return (0);
}
