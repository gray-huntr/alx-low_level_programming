#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints a value from n to 98
 * @n: parameter
 */
void print_to_98(int n)
{
	int i;

	if (n < 99)
	{
		i = n;
		while (i < 99)
		{
			printf("%d, ", i);
			i++;
		}
		printf("\n")
	} else
	{
		i = n;
		while (i > 97)
		{
			printf("%d, ", i);
			i--;
		}
		printf("\n");
	}
}
