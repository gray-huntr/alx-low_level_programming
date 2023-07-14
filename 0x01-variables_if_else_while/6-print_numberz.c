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
		putchars('0' + x);
		x++;
	}
	putchars('\n');
	return (0);
}
