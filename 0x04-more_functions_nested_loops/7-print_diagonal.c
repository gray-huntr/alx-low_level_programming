#include "main.h"
/**
 * print_diagonal - print \
 * @n: the parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int a, row;

	row = 0;
	while (row < n)
	{
		a = 0;
		while (a <= row)
		{
			if (a != row)
				_putchar('  ');
			else
				_putchar('\\');
			a++;
		}
		_putchar('\n');
		row++;
	}
	if (n <= 0)
		_putchar('\n');
}
