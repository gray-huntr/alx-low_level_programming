#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: int param.
 * Return: last digit
 */
int print_last_digit(int n)
{
	int number;

	if (n < 0)
	{
		number = (n % 10) * -1;
		_putchar(number + '0');
		return (number);
	}
	else
	{
		number = n % 10;
		_putchar(number + '0');
		return (number);
	}
}
