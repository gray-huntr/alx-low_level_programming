#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0-
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		putchar('0' + num);
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
