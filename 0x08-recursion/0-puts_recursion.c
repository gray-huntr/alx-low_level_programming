#include "main.h"

/**
 * _puts_recursion - a function that prints a string recursively
 * @s: char array to printed
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		break;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
