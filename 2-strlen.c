#include "main.h"

/**
 * _strlen - return lenght of the string.
 * @s: string
 *
 * Return: Always int.
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
	i++;
	}
	return (i);
}
