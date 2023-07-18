#include "main.h"
/**
 * print_alphabet - prints a - z
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char ltr;

	ltr = 'a';
	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}
	_putchar('\n');
}
