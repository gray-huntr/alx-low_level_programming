#include "main.h"
/**
 * print_line - print a line
 * @n: parameter
 * Return: void
 */
void print_line(int n)
{
	int a = 0;

	if (n < 1)
	{
		_putchar('\n');
	} else
	{
		while (a <= n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
}
