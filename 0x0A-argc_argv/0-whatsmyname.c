#include <stdio.h>

/**
 * main - prints the name of a program
 * @argc: argument count
 * @argv: argument values 
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}