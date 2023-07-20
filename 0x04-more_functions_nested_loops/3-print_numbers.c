#include "main.h"
/**
 * print_numbers - print numbers from 0 - 9
 * Return: void
 */
void print_numbers(void)
{
	int a;

	a = 0;
	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
