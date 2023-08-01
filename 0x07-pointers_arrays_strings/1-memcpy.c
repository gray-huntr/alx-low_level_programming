#include "main.h"
/**
 * _memcpy - copies memory akrea
 * @dest: the destination mem
 * @src: the source mem
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		dest[a] = src[a];
		a++;
	}
	return (dest);
}
