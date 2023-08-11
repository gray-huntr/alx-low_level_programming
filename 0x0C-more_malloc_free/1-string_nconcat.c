#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * string_nconcat - concatenates two string using newly allocated memory
 * @s1: first string
 * @s2: second string
 * @n: s2 lenght limit
 * Return: pointer to concatenated string, else NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0;
	char *concatenated;
	unsigned int i, j;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n > len2)
		n = len2;

	concatenated = malloc(sizeof(char) * (len1 + n + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < n; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';
	return (concatenated);

}
