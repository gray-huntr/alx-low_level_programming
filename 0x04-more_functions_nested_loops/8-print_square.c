#include "main.h"
/**
 * print_square - prints a square based on input
 * @size: detemines the size of square
 * Return: void
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
		_putchar('\n');
	for  (b = 0; b < size; b++)
	{
		for (a = 0; a < size; a++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
