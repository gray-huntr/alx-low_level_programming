#include "main.h"
#include <stdio.h>
/**
 * main - print out the first 50  fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	int fib1 = 1, fib2 = 2, fib3;

	printf("%zu, %zu, ", fib1, fib2);
	count = 3;
	while (count <= 50)
	{
		fib3 = fib1 + fib2;
		if (count == 50)
			printf("%zu\n", fib3);
		else
			printf("%zu, ", fib3);

		fib1 = fib2;
		fib2 = fib3;
		count++;
	}
	return (0);
}

