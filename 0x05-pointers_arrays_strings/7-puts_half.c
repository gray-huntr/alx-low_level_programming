#include "main.h"
/**
 * puts_half - prints second half of string
 * @str: parameter
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0, n, i;

	while (str[length] != '\0')
	{
		length++;
	}
	n = (length - 1) / 2;
	i = n + 1;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
