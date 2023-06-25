#include "main.h"
/**
 * cont_print - continues to print characters if no specifier found
 * @c: character parameter
 *
 * Return: int
 */
int cont_print(char c)
{
	return (write(1, &c, 1));
}
