#include "main.h"
/**
 * print alphabet - prints a - z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ltr;

	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}
	_putchar('\n');
}
