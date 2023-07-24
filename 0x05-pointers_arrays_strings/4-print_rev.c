#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: parameter
 * Return: void
 */
void print_rev(char *s)
{
	int total = 0;
	int a;

	while (*s != '\0')
	{
		total++;
		s++;
	}
	for (a = (total - 1); a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
