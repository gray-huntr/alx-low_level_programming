#include "main.h"
#include <string.h>
/**
 * _strlen - returns the length of a string
 * @s: parameter
 * Return: int
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
