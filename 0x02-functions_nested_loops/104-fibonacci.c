#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int i = 3;
	unsigned int numfibo = 98;
	unsigned int result;

	printf("1, 2");
	while (i <= numfibo)
	{
		result = a + b;
		printf(", %u", result);
		a = b;
		b = result;
		i++;
	}
	printf("\n");
	return (0);
}
