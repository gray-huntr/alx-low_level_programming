#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int x = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			x = x + x;
			x++;
		}
	}
	printf("%d\n", x);
	return (0);

}
