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
	do{
		putchar(ltr);
		putchar('\n');
	} while (ltr <= 'z');
	return (0);
}
