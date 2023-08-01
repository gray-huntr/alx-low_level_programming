#include "main.h"
/**
 * _strstr - first first occurence of a string
 * @haystack: source string
 * @needle: target string
 * Return: haystack and needle on top XD
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b, c;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (c = a, b = 0; needle[b] != '\0'; b++, c++)
		{
			if (needle[b] != haystack[c] || haystack[c] == '\0')
				break;
		}
		if (needle[b] == '\0')
			return (haystack + a);
	}
	return (0);
}
