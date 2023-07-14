#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char ltr;

	ltr = 'a';
	do {
		putchar(ltr);
		ltr++;
	} while (ltr <= 'z');
	ltr = 'A';
	do {
		putchar(ltr);
		ltr++;
	} while (ltr <= 'Z');
	putchar('\n');
	return (0);
}
