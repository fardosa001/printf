#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  * _print_char -prints character
  * @ap: argument parameters.
  * Return: 0
  */

int _print_char(va_list ap)
{
	char c = va_arg(ap, int);

	write(0, c, sizeof(char));
	return (1);

}
