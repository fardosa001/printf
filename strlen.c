#include "main.h"
/**
 * _strlen - Returns the length of a string
 *
 * @s: Function parameter
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
