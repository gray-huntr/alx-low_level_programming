#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char ltr;

	ltr = 'z';
	do {
		putchar(ltr);
		ltr--;
	} while (ltr >= 'a');
	putchar('\n');
	return (0);
}
