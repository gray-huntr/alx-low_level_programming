#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: argument values
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
