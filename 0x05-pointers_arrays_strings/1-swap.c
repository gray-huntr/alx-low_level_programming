#include "main.h"
/**
 * swap_int - swaps the value of two ints
 * @a: parameter
 * @b: parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int new = *a;
	*a = *b;
	*b = new;
}
