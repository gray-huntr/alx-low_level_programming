#include "main.h"
/**
 * print_number - prints integers
 * @n: parameter
 * Return: void
 */
void print_number(int n)
{
	unsigned int a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	a = 1;

	while (n / a > 9)
		a *= 10;

	while (a >= 1)
	{
		_putchar((n / a) + '0');
		n %= a;
		a /= 10;
	}
}
