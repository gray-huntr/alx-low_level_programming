#include <stdio.h>
#include "main.h"
/**
 * main - print the sum of
 * numbers divisible 3 and 5 below 1024
 * Return: 0
 */
int main(void)
{
	int start = 0;
	long int sum = 0;

	while (start < 1024)
	{
		if (start % 3 == 0 || start % 5 == 0)
			sum += start;
		start++;
	}
	printf("%d\n", sum);
	return (0);
}
