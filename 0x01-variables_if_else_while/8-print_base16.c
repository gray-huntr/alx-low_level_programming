#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int y;
	char x;

	y = 0;
	x = 'a';
	while (y < 10)
	{
		putchar(y);
		y++;
	}
	while (x < 'g')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
