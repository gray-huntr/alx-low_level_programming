#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: argument count
 * @argv: argument values 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i]);
		i++;
	return (0);
}
