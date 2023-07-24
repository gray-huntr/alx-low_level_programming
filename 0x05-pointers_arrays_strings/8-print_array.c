#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of an array
 * @a: pointer of array
 * @n: size of array
 * Return: void
 */
void print_array(int *a, int n)
{
	int length = 0, end = n - 1;

	while (length < end)
	{
		printf("%d, ", a[length]);
		length++;
	}
	printf("%d\n", a[length]);
}
