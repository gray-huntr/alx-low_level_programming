#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabet 10x
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int x;
	char ltr;

	x = 0;
	ltr = 'a';
	while (x <= 10)
	{
		while (ltr <= 'z')
		{
			_putchar(ltr);
			ltr++;
		}
		x++;
		_putchar('\n');
	}
}
