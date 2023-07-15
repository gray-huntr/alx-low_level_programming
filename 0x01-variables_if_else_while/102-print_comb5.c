#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int dig1 = 0;
	int dig2;

	while (dig1 <= 98)
	{
		dig2 = dig1 + 1;
		while (dig2 <= 99)
		{
			putchar('0' + dig1 / 10);
			putchar('0' + dig1 % 10);
			putchar(' ');
			putchar('0' + dig2 / 10);
			putchar('0' + dig2 % 10);
			if (dig1 != 98 || dig2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			dig2++;
		}
		dig1++;
	}
	putchar('\n');
	return (0);
}
