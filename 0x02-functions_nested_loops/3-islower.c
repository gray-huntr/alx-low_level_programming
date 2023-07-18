#include "main.h"
/**
 * _islower - checks if c is lower
 * @c: param to be checked
 * Return: 1 if lowercase
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);
}
