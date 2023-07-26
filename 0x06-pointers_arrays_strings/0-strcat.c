#include "main.h"
/**
 * _strcat - concatenates two string
 * @dest: string to append to
 * @src: string to be appended
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a + b] = src[b];
		b++;
	}
	return (dest);
}
