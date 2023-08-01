#include "main.h"
/**
 * _strpbrk - function to return the first occurence of the a string
 * @s: source string
 * @accept: target string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return (0);
}
