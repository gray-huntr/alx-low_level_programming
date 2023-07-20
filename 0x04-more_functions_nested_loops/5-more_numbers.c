#include "main.h"
/**
 * more_numbers - print specific numbers 10x
 *
 * Return: void
 */
void more_numbers(void)
{
	int a, b;

	a = 0;
	b = 0;
	while (b <= 10)
	{
		while (a <= 14)
		{
			_putchar('0' + a);
			a++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
