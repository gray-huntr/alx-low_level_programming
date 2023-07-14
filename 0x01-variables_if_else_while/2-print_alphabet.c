#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 success
 */
int main(void)
{
	char ltr;

	ltr = 'a';
	do {
		putchar(ltr);
		ltr++;
	} while (ltr <= 'z');
	putchar('\n');
	return (0);
}
