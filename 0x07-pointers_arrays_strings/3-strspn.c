#include "main.h"

/**
 * _strspn - get the length of the substring prefix
 * @s: string
 * @accept: suffix
 * Return: Length of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int a = 0, b, count = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			return (count);
		a++;
	}
	return (count);
}

