#include "main.h"

/**
 * _atoi - converting strings to ints
 * @s:string to convert
 * Return: converted int
 */
int _atoi(char *s)
{
	int num = 0, symbol = 1, i = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			symbol *= -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		num = num * 10 - (s[i] - '0');
		i++;
	}
	symbol *= -1;
	return (num * symbol);
}
