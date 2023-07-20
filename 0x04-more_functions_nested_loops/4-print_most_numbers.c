#include "main.h"
/**
 * print_most_numbers - print required numbers
 * Return: void
 */
void print_most_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		if (a != 2 && a != 4)
		{
			_putchar('0' + a);
		}
		a++;
	}
	_putchar('\n');
}
