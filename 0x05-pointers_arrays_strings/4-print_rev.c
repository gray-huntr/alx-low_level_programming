#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int total = 0;

	while (s[total] != '\0')
	{
		total++;
	}
	for (total = total - 1; total >= 0; total--)
	{
		_putchar(s[total]);
	}
	_putchar('\n');
}
