#inclide "main.h"
/**
 * jack_bauer - prints the cloack in 24hr format
 *
 *
 */
void jack_bauer(void)
{
	int x y;

	x = 0;
	while (x < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar('0' + (x / 10));
			_putchar('0' + (x % 10));
			_putchar(':');
			_putchar('0' + (y / 10));
			_putchar('0' + (y % 10));
			_putchar('\n');
			y++;
		}
		x++;
	}
}
