#include "main.h"
/**
 * _strpbrk - function to return the first occurence of the a string
 * @s: source string
 * @accept: target string
 * Return: s
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b = 0;

	while (s[a] != '\0')
	{
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
				return (s + a);
			b++;
		}
		a++;
	}
	return (0);
}
