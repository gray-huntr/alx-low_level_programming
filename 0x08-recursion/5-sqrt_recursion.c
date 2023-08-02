#include "main.h"

/**
 * _sqrt_recursion - find the square root of an int
 * @n: square
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	return (square_finder(n, 1));
}

/**
 * square_finder - find the square by guessing
 * @n: the square
 * @i: the number to count up till square is gotten
 * Return: guess
 */
int square_finder(int n, int i)
{
	int num = i * i;

	if (num == n)
		return (i);
	else if (num > n)
		return (-1);
	return (square_finder(n, i + 1));
}
