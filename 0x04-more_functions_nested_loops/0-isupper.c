#include "main.h"
/**
 * _isupper - checks if value is uppercase
 * @c: parameter
 * Return: either 1 or 0
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
