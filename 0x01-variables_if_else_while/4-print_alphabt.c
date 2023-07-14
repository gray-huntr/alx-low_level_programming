#include<stdio.h>
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
		if (ltr != 'q' && ltr != 'e')
		{
			putchar(ltr);
			ltr++;
		}
	} while (ltr <= 'z');
	putchar('\n');
	return (0);
}
