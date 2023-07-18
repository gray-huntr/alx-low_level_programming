#include "main.h"
/**
 * times_table - Print the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int a = 0;
	int b;
	int result;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			result = a * b;

			if (result > 9)
			{
				_putchar(result / 10  + '0');
				_putchar(result % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(result + '0');
			}
			else
			{
				_putchar(result + '0');
			}

			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
