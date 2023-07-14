#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
