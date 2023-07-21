#include "main.h"
/**
 * print_number - prints integers
 * @n: parameter
 * Return: void
 */
void print_number(int n)
{
	int a;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10 != 0)
	{
		a = n / 10;
		print_number(a);
	}
	_putchar(n % 10 + '0');
}
