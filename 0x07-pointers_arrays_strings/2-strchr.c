#include "main.h"
/**
 * _strchr - returns the first occurrence of a char
 * @s: the string containing the target char
 * @c: the target character
 * Return: first char occurence or NULL
 */
char *_strchr(char *s, char c)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] == c)
			return (s + a);
		a++;
	}
	if (s[a] == c)
		return (s + a);
	else
		return ('\0');
}
