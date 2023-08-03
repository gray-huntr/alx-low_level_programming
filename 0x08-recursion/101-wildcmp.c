#include "main.h"

/**
 * wildcmp - compares two string for a match.
 * 1 if true else 0
 * @s1: first string
 * @s2: second string
 * Return: 1 if true else 0
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 & !*s2)
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
			return (1);
	}
	return (0);
}
